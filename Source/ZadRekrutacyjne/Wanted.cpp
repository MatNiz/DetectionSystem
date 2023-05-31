// Fill out your copyright notice in the Description page of Project Settings.


#include "Wanted.h"
#include "Components/StaticMeshComponent.h"
#include "WantedComponent.h"

// Sets default values
AWanted::AWanted()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WantedMesh = CreateDefaultSubobject<UStaticMeshComponent>("WantedMesh");

	WantedComponent = CreateDefaultSubobject<UWantedComponent>("WantedComponent");

}

// Called when the game starts or when spawned
void AWanted::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AWanted::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

