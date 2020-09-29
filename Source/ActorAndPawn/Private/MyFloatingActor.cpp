// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFloatingActor.h"

AMyFloatingActor::AMyFloatingActor()
{
	PrimaryActorTick.bCanEverTick = true;
	Speed = 0;
}

void AMyFloatingActor::BeginPlay()
{
	Super::BeginPlay();
}

void AMyFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Creating a new location vector and setting it to the Actors Current Location
	FVector NewLocation = GetActorLocation();
	//Calculating the DeltaHeight per frame. The delta height is on a sine wave
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.X += DeltaHeight * XValue;
	NewLocation.Y += DeltaHeight * YValue;
	NewLocation.Z += DeltaHeight * ZValue;

	RunningTime += DeltaTime * Speed;
	SetActorLocation(NewLocation);
}

