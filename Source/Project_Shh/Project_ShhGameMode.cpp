// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_ShhGameMode.h"
#include "Project_ShhHUD.h"
#include "Project_ShhCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_ShhGameMode::AProject_ShhGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProject_ShhHUD::StaticClass();
}
