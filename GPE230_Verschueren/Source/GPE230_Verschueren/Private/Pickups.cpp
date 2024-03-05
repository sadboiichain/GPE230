// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickups.h"
#include "MazeCharacter.h"

void APickups::BeginPlay()
{
	Super::BeginPlay();
	//call when overlapped
	OnActorBeginOverlap.AddDynamic(this, &APickups::CheckActorType);

}

void APickups::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{
	//if other actor is player chr(maze character)
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
	{
		Apply(Cast <AMazeCharacter> (OtherActor));
		destroySelf();
	}
}

void APickups::Apply(AMazeCharacter* player)
{
}

void APickups::destroySelf()
{
	this->Destroy();
}
