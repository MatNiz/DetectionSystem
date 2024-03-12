// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WantedComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ZADREKRUTACYJNE_API UWantedComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWantedComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


	void OnDetected();
	void ChangeDistance(float Distance);

private:
	UPROPERTY(EditAnywhere, Category = "Properties")
		bool IsDetected = 0;
	UPROPERTY(EditAnywhere, Category = "Properties")
		float DistanceFromSeeker;

};
