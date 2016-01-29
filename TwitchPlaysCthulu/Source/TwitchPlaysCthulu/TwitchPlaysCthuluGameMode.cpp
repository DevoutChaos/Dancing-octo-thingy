// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TwitchPlaysCthulu.h"
#include "TwitchPlaysCthuluGameMode.h"
#include "TwitchPlaysCthuluPlayerController.h"

ATwitchPlaysCthuluGameMode::ATwitchPlaysCthuluGameMode()
{
	// no pawn by default
	DefaultPawnClass = NULL;
	// use our own player controller class
	PlayerControllerClass = ATwitchPlaysCthuluPlayerController::StaticClass();
}
