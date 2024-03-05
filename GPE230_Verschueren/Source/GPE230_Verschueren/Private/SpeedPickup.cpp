// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedPickup.h"
#include "MazeCharacter.h"


void ASpeedPickup::BeginPlay()
{
	Super::BeginPlay();
	//call when overlapped
	OnActorBeginOverlap.AddDynamic(this, &ASpeedPickup::CheckActorType);

}

void ASpeedPickup::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{

	//if other actor is player chr(maze character)
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
	{
		Apply(Cast<AMazeCharacter>(OtherActor));
		destroySelf();
	}
}

void ASpeedPickup::Apply(AMazeCharacter* player)
{
	//print damage for log/debug
	player->doubleSpeed(speedBoost);
}

void ASpeedPickup::destroySelf()
{
	this->Destroy();
}
