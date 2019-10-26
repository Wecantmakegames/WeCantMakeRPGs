// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "WeCantMakeRPGsGameMode.h"
#include "WeCantMakeRPGsPlayerController.h"
#include "WeCantMakeRPGsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWeCantMakeRPGsGameMode::AWeCantMakeRPGsGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AWeCantMakeRPGsPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}