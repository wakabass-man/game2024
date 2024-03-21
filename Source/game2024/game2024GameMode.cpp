// Copyright Epic Games, Inc. All Rights Reserved.

#include "game2024GameMode.h"
#include "game2024Character.h"
#include "UObject/ConstructorHelpers.h"

Agame2024GameMode::Agame2024GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
