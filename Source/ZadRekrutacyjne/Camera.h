// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera.generated.h"

UCLASS()
class ZADREKRUTACYJNE_API ACamera : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACamera();

	bool isSeekerPresent = 0;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AWanted> MyWanted;

	UPROPERTY(EditAnywhere)
		TSubclassOf<class ASeeker> MySeeker;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SpawnWanted();

	void SpawnSeeker();

	void MoveForward(float Value);

	void MoveRight(float Value);



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
