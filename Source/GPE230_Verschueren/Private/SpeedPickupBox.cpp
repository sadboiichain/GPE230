// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedPickupBox.h"
#include "MazeCharacter.h"

void ASpeedPickupBox::BeginPlay()
{
	Super::BeginPlay();
	//call when overlapped
	OnActorBeginOverlap.AddDynamic(this, &ASpeedPickupBox::CheckActorType);

}

void ASpeedPickupBox::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{
	//if other actor is player chr(maze character)
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
	{
		Apply(Cast<AMazeCharacter>(OtherActor));
		destroySelf();
	}
}

void ASpeedPickupBox::Apply(AMazeCharacter* player)
{
	player->doubleSpeed(speedBoost);
}

void ASpeedPickupBox::destroySelf()
{
	this->Destroy();
}
