// Copyright Epic Games, Inc. All Rights Reserved.

#include "HellGameMode.h"
#include "HellCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHellGameMode::AHellGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
