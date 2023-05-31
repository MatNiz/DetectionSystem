// Fill out your copyright notice in the Description page of Project Settings.


#include "Seeker.h"
#include "Components/StaticMeshComponent.h"
#include "SeekerComponent.h"

// Sets default values
ASeeker::ASeeker()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SeekerMesh = CreateDefaultSubobject<UStaticMeshComponent>("SeekerMesh");

	SeekerComponent = CreateDefaultSubobject<USeekerComponent>("SeekerComponent");

}

// Called when the game starts or when spawned
void ASeeker::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASeeker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

