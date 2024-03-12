// Copyright Epic Games, Inc. All Rights Reserved.

#include "GPE230_VerschuerenGameMode.h"
#include "GPE230_VerschuerenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGPE230_VerschuerenGameMode::AGPE230_VerschuerenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
