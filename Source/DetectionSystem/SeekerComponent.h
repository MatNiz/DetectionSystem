// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <vector>
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SeekerComponent.generated.h"



UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DETECTIONSYSTEM_API USeekerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	USeekerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPROPERTY(EditAnywhere, Category = "Properties")
		float DetectionDistance = 700.0;
	UPROPERTY(EditAnywhere, Category = "Properties")
		float DetectionIntervalInSeconds = 1.5;


	void DetectWantedActors();

};
