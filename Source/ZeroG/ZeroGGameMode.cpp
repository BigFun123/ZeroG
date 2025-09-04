// Copyright BigFun Software

#include "ZeroGGameMode.h"
#include "ZeroGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZeroGGameMode::AZeroGGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/_ZeroG/Characters/ZG_MainChar"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

}
