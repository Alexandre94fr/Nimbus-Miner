// Copyright Epic Games, Inc. All Rights Reserved.

#include "Nimbus_MinerGameMode.h"
#include "Nimbus_MinerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANimbus_MinerGameMode::ANimbus_MinerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
