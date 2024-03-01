// Copyright Epic Games, Inc. All Rights Reserved.

#include "DaliyLearnGameMode.h"
#include "DaliyLearnCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADaliyLearnGameMode::ADaliyLearnGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
