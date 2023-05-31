// Fill out your copyright notice in the Description page of Project Settings.


#include "Camera.h"
#include "Wanted.h"
#include "Seeker.h"

// Sets default values
ACamera::ACamera()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACamera::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 60.f, FColor::Red, "Move:  w s a d\nSpawn Wanted:  2\nSpawn Seeker:  1\n");
}


// Called every frame
void ACamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ACamera::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("SpawnWanted", IE_Pressed, this, &ACamera::SpawnWanted);
	PlayerInputComponent->BindAction("SpawnSeeker", IE_Pressed, this, &ACamera::SpawnSeeker);
	PlayerInputComponent->BindAxis("MoveForward", this, &ACamera::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACamera::MoveRight);


}

void ACamera::SpawnWanted()
{
	UE_LOG(LogTemp, Log, TEXT("Spawn Wanted"));

	FTransform spawnTransform = GetActorTransform();
	spawnTransform.SetLocation(GetActorLocation() + FVector(100, 0, 0));

	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	GetWorld()->SpawnActor<AWanted>(MyWanted, spawnTransform, spawnParams);

}

void ACamera::SpawnSeeker()
{
	if (isSeekerPresent == 0)
	{
		UE_LOG(LogTemp, Log, TEXT("Spawn Seeker"));

		FTransform spawnTransform = GetActorTransform();
		spawnTransform.SetLocation(GetActorLocation() + FVector(100, 0, 0));

		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		GetWorld()->SpawnActor<ASeeker>(MySeeker, spawnTransform, spawnParams);

		isSeekerPresent = 1;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Too many Seekers"));
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, "Too many Seekers");
	}

}

void ACamera::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ACamera::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
