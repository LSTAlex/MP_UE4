// Copyright Epic Games, Inc. All Rights Reserved.

#include "MP_UE4GameMode.h"
#include "MP_UE4HUD.h"
#include "MP_UE4Character.h"
#include "UObject/ConstructorHelpers.h"

AMP_UE4GameMode::AMP_UE4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMP_UE4HUD::StaticClass();
}
