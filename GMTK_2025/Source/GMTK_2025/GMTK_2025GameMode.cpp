// Copyright Epic Games, Inc. All Rights Reserved.

#include "GMTK_2025GameMode.h"
#include "GMTK_2025Character.h"
#include "UObject/ConstructorHelpers.h"

AGMTK_2025GameMode::AGMTK_2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
