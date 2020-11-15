// Copyright Epic Games, Inc. All Rights Reserved.

#include "Demon3GameMode.h"
#include "Demon3Character.h"
#include "UObject/ConstructorHelpers.h"

ADemon3GameMode::ADemon3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
