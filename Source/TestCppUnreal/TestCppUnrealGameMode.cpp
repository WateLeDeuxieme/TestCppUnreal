// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestCppUnrealGameMode.h"
#include "TestCppUnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestCppUnrealGameMode::ATestCppUnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
