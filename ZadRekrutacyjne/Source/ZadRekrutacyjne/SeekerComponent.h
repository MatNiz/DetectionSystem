// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <vector>
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SeekerComponent.generated.h"



UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ZADREKRUTACYJNE_API USeekerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	USeekerComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;


private:

	UPROPERTY(EditAnywhere)
		float DetectionDistance;

	TArray<AActor*> DetectedActors;

	void DetectWantedActors();



	// Time interval for detecting wanted actors
	UPROPERTY(EditAnywhere)
		float DetectionInterval;

	// Timer handle for detecting wanted actors
	FTimerHandle DetectionTimerHandle;


};