// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyActor.h"
#include "MyRotatingActor.generated.h"

/**
 * 
 */
UCLASS()
class ACTORANDPAWN_API AMyRotatingActor : public AMyActor
{
	GENERATED_BODY()

public:

	AMyRotatingActor();

	//Declare floats
	UPROPERTY(EditAnywhere, Category = Movement)
		float PitchValue;

	UPROPERTY(EditAnywhere, Category = Movement)
		float YawValue;

	UPROPERTY(EditAnywhere, Category = Movement)
		float RollValue;

	//Called every frame
	virtual void Tick(float DeltaSeconds) override;

protected:
	//Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
