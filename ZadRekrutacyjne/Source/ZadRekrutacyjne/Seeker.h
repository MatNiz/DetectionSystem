// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Seeker.generated.h"

UCLASS()
class ZADREKRUTACYJNE_API ASeeker : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASeeker();

	UPROPERTY(EditAnywhere, Category = "Components")
		class UStaticMeshComponent* SeekerMesh;

	UPROPERTY(EditAnywhere, Category = "Components")
		class USeekerComponent* SeekerComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
