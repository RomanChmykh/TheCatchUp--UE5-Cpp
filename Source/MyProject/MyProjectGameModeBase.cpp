// Copyright Epic Games, Inc. All Rights Reserved.


#include "MyProjectGameModeBase.h"
#include "TCUCharacter.h"
#include "TCUPlayerController.h"

AMyProjectGameModeBase::AMyProjectGameModeBase()
{
	DefaultPawnClass = ATCUCharacter::StaticClass();
	PlayerControllerClass = ATCUPlayerController::StaticClass();
}

