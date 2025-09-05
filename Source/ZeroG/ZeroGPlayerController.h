// Copyright BigFun Software

/**
 * Player Controller class for ZeroG game.
 * It manages input mapping contexts and player-specific controls.
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ZeroGPlayerController.generated.h"

class UInputMappingContext;

/**
 *
 */
UCLASS()
class ZEROG_API AZeroGPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	// Begin Actor interface
protected:

	virtual void BeginPlay() override;

	// End Actor interface
};
