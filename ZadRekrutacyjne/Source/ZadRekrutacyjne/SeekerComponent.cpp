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
	DetectionDistance = 700.f;
	DetectionInterval = 1.5f;
}

// Called when the game starts
void USeekerComponent::BeginPlay()
{
	Super::BeginPlay();

	// Start the detection timer
	GetWorld()->GetTimerManager().SetTimer(DetectionTimerHandle, this, &USeekerComponent::DetectWantedActors, DetectionInterval, true);

}

// Called every frame
void USeekerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}


void USeekerComponent::DetectWantedActors()
{
	// Clear the array of detected actors
	DetectedActors.Empty();

	// Get all actors with the WantedComponent
	TArray<AActor*> WantedActors;

	std::vector <float> distancesFromWanteds;

	//collision params
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


	// Iterate over each wanted actor and check if it's within the detection range
	for (AActor* WantedActor : WantedActors)
	{
		FVector WantedLocation = WantedActor->GetActorLocation();

		float DistanceToWantedActor = (WantedLocation - SeekerLocation).Size();

		//checking collisions
		CollisionParams.AddIgnoredActor(WantedActor);
		GetWorld()->LineTraceSingleByChannel(OutHit, WantedLocation, SeekerLocation, ECC_Visibility, CollisionParams);


		if (DistanceToWantedActor <= DetectionDistance && !OutHit.bBlockingHit)
		{
			// Add the wanted actor to the array of detected actors
			DetectedActors.Add(WantedActor);
			distancesFromWanteds.push_back(DistanceToWantedActor);

			//inform about detection
			AActor* TempActor = DetectedActors.Last();
			UWantedComponent* ClosestWantedComponent = TempActor->FindComponentByClass<UWantedComponent>();
			ClosestWantedComponent->OnDetected();

			DetectedActorsString += FString::Printf(TEXT(" %s (%.2f), "), *WantedActor->GetName(), DistanceToWantedActor);
		}
	}

//	UE_LOG(LogTemp, Log, TEXT("%s\n\n\n"), *DetectedActorsString);


	// Check if there are any detected actors
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


		//inform closesr and farthest about distance
		AActor* ClosestActor = DetectedActors[min_element_index];
		AActor* FarthestActor = DetectedActors[max_element_index];

		UWantedComponent* ClosestWantedComponent = ClosestActor->FindComponentByClass<UWantedComponent>();
		UWantedComponent* FarthestWantedComponent = FarthestActor->FindComponentByClass<UWantedComponent>();

		ClosestWantedComponent->ChangeDistance(min_value);
		FarthestWantedComponent->ChangeDistance(max_value);
		
	}

}
