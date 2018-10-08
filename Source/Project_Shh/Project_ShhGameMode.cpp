// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_ShhGameMode.h"
#include "Project_ShhCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_ShhGameMode::AProject_ShhGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
