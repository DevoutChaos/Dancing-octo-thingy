// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TwitchPlaysCthulu.h"
#include "TwitchPlaysCthuluPlayerController.h"

ATwitchPlaysCthuluPlayerController::ATwitchPlaysCthuluPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
