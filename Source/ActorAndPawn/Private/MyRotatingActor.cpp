// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRotatingActor.h"

AMyRotatingActor::AMyRotatingActor()
{
	PrimaryActorTick.bCanEverTick = true;

	PitchValue = 0.f;
	YawValue = 0.f;
	RollValue = 0.f;
}

void AMyRotatingActor::BeginPlay()
{
	Super::BeginPlay();
}

void AMyRotatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// on ever frame change rotation for a smooth rotating actor
	FQuat QuatRotation = FRotator(PitchValue, YawValue, RollValue).Quaternion();
	//Adding to the Actors Current Rotation with our new Quaternion rotation every frame.
	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);
}
