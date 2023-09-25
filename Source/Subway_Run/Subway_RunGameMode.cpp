// Copyright Epic Games, Inc. All Rights Reserved.

#include "Subway_RunGameMode.h"
#include "Subway_RunCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASubway_RunGameMode::ASubway_RunGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
