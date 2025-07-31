// Fill out your copyright notice in the Description page of Project Settings.


#include "CatAIController.h"


#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "CatPawn.h"

ACatAIController::ACatAIController(const FObjectInitializer& ObjectInitializer)
{
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorTree Component"));
}

void ACatAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// Cast your Character/Pawn to get access to the attributes
	if (auto CatPawn = Cast<ACatPawn>(InPawn))
	{
		// Check if the assets has been selected in the editor
		if (CatPawn->TreeAsset) {

			// Run the behavior tree
			BehaviorTreeComponent->StartTree(*CatPawn->TreeAsset);
		}
	}
}
