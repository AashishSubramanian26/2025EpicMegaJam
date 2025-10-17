// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheLastHopeGameMode.h"
#include "TheLastHopeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATheLastHopeGameMode::ATheLastHopeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
