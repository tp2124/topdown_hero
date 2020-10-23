// Copyright Epic Games, Inc. All Rights Reserved.

#include "topdown_heroGameMode.h"
#include "topdown_heroPlayerController.h"
#include "topdown_heroCharacter.h"
#include "UObject/ConstructorHelpers.h"

Atopdown_heroGameMode::Atopdown_heroGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = Atopdown_heroPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}