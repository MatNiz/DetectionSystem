// Fill out your copyright notice in the Description page of Project Settings.

#include "SeekerComponent.h"
#include "WantedComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include <random>
#include <EngineUtils.h>
#include <vector>

// Sets default values for this component's properties
USeekerComponent::USeekerComponent()
{

}

// Called when the game starts
void USeekerComponent::BeginPlay()
{
	Super::BeginPlay();


	FTimerHandle Timer;
	GetWorld()->GetTimerManager().SetTimer(Timer, this, &USeekerComponent::DetectWantedActors, DetectionIntervalInSeconds, true);
}

// Called every frame
void USeekerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}


void USeekerComponent::DetectWantedActors()
{
	TArray<AActor*> WantedActors;
	TArray<AActor*> DetectedActors;


	std::vector <float> distancesFromWanteds;


	FHitResult OutHit;
	FCollisionQueryParams CollisionParams;
	CollisionParams.bTraceComplex = true;
	CollisionParams.bReturnPhysicalMaterial = false;
	CollisionParams.AddIgnoredActor(GetOwner());
	

	for (FActorIterator It(GetWorld()); It; ++It)
	{
		AActor* Actor = *It;
		UWantedComponent* MyComponent = Actor->FindComponentByClass<UWantedComponent>();
		if (MyComponent != nullptr)
		{
			WantedActors.Add(Actor);
		}
	}

	FVector SeekerLocation = GetOwner()->GetActorLocation();

	FString DetectedActorsString = TEXT("Before sort:");


	for (AActor* WantedActor : WantedActors)
	{
		FVector WantedLocation = WantedActor->GetActorLocation();

		float DistanceToWantedActor = (WantedLocation - SeekerLocation).Size();

		CollisionParams.AddIgnoredActor(WantedActor);
		GetWorld()->LineTraceSingleByChannel(OutHit, WantedLocation, SeekerLocation, ECC_Visibility, CollisionParams);


		if (DistanceToWantedActor <= DetectionDistance && !OutHit.bBlockingHit)
		{
			DetectedActors.Add(WantedActor);
			distancesFromWanteds.push_back(DistanceToWantedActor);

			AActor* TempActor = DetectedActors.Last();
			UWantedComponent* ClosestWantedComponent = TempActor->FindComponentByClass<UWantedComponent>();
			ClosestWantedComponent->OnDetected();

			DetectedActorsString += FString::Printf(TEXT(" %s (%.2f), "), *WantedActor->GetName(), DistanceToWantedActor);
		}
	}

	if (DetectedActors.Num() == 0)
	{
		return;
	}
	else
	{
		auto max_element_iter = std::max_element(distancesFromWanteds.begin(), distancesFromWanteds.end());
		int max_element_index = std::distance(distancesFromWanteds.begin(), max_element_iter);
		float max_value = *max_element_iter;

		auto min_element_iter = std::min_element(distancesFromWanteds.begin(), distancesFromWanteds.end());
		int min_element_index = std::distance(distancesFromWanteds.begin(), min_element_iter);
		float min_value = *min_element_iter;

		//UE_LOG(LogTemp, Log, TEXT("najdalszy:%.2f, najdalszy id: %i, najblizszy:%.2f, najblizszyid:%i"), max_value, max_element_index + 1, min_value, min_element_index + 1);

		std::sort(distancesFromWanteds.begin(), distancesFromWanteds.end());


		FString AfterString = TEXT("Distances: ");

		for (int j = 0; j < distancesFromWanteds.size(); j++) {
			AfterString += FString::Printf(TEXT("%.2f   "), distancesFromWanteds[j]);
		}

		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::White, *AfterString);
		UE_LOG(LogTemp, Log, TEXT("%s\n\n\n"), *AfterString);


		AActor* ClosestActor = DetectedActors[min_element_index];
		AActor* FarthestActor = DetectedActors[max_element_index];

		UWantedComponent* ClosestWantedComponent = ClosestActor->FindComponentByClass<UWantedComponent>();
		UWantedComponent* FarthestWantedComponent = FarthestActor->FindComponentByClass<UWantedComponent>();

		ClosestWantedComponent->ChangeDistance(min_value);
		FarthestWantedComponent->ChangeDistance(max_value);
	}
}
