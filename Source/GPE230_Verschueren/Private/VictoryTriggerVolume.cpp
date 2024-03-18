// Fill out your copyright notice in the Description page of Project Settings.


#include "VictoryTriggerVolume.h"
#include "MazeCharacter.h"

void AVictoryTriggerVolume::BeginPlay()
{
	Super::BeginPlay();
	//call when overlapped
	OnActorBeginOverlap.AddDynamic(this, &AVictoryTriggerVolume::CheckActorType);
}

void AVictoryTriggerVolume::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{
	//if other actor is player chr(maze character)
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
	{
		Apply(Cast<AMazeCharacter>(OtherActor));
		
	}
}

void AVictoryTriggerVolume::Apply(AMazeCharacter* player)
{
	player->OpenVictoryScreen();
}


