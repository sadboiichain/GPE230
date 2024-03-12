// Fill out your copyright notice in the Description page of Project Settings.


#include "mazeGameMode.h"

void AmazeGameMode::InitGameState()
{
	Super:: InitGameState();

	//if no overrride
	if (DefaultPawnClass == ADefaultPawn::StaticClass())
	{
		DefaultPawnClass = DefaultPlayerCharacter;
	}

}