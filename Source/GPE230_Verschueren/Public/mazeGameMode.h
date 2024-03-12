// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/DefaultPawn.h"
#include "MazeCharacter.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "mazeGameMode.generated.h"


/**
 * 
 */
UCLASS()
class GPE230_VERSCHUEREN_API AmazeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	void InitGameState() override;

private:

	//set up the default pawn to the a maze character
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<AMazeCharacter> DefaultPlayerCharacter = AMazeCharacter::StaticClass();
	

};

