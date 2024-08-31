// Copyright Epic Games, Inc. All Rights Reserved.

#include "VoiceUeDemoGameMode.h"
#include "VoiceUeDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVoiceUeDemoGameMode::AVoiceUeDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
