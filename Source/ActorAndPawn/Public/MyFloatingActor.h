// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyActor.h"
#include "MyFloatingActor.generated.h"

/**
 * 
 */
UCLASS()
class ACTORANDPAWN_API AMyFloatingActor : public AMyActor
{
	GENERATED_BODY()

public:
	AMyFloatingActor();

	UPROPERTY(EditAnywhere, Category = Movement)
		float Speed;

	UPROPERTY(EditAnywhere, Category = Movement)
		float XValue;

	UPROPERTY(EditAnywhere, Category = Movement)
		float YValue;

	UPROPERTY(EditAnywhere, Category = Movement)
		float ZValue;

	virtual void Tick(float DeltaTime) override;

protected:

	//Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float RunningTime;
	
};
