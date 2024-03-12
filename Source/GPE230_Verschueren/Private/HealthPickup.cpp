// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthPickup.h"
#include "MazeCharacter.h"

void AHealthPickup::BeginPlay()
{
	Super::BeginPlay();
	//call when overlapped
	OnActorBeginOverlap.AddDynamic(this, &AHealthPickup::CheckActorType);
	
}

void AHealthPickup::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{
	
	//if other actor is player chr(maze character)
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
	{
		Apply(Cast<AMazeCharacter>(OtherActor));
		destroySelf();
	}
}

void AHealthPickup::Apply(AMazeCharacter* player)
{
	//print damage for log/debug
	player->heal(HealAmount);
}

void AHealthPickup::destroySelf()
{
	this->Destroy();
}

