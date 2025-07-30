// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CatPawn.generated.h"

UCLASS()
class GMTK_2025_API ACatPawn : public APawn
{
	GENERATED_BODY()

public:
	// Add a Behavior tree to select in the editor for your character
	UPROPERTY(EditAnywhere, Category = "AI")
	class UBehaviorTree* TreeAsset;

public:
	// Sets default values for this pawn's properties
	ACatPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
