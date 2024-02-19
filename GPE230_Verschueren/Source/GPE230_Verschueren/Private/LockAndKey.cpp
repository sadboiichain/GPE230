// Fill out your copyright notice in the Description page of Project Settings.


#include "LockAndKey.h"
#include "MazeCharacter.h"


/*
ALockAndKey::ALockAndKey()
{
	//call when overlapped?
	OnActorBeginOverlap.AddDynamic(this, &ALockAndKey::CheckActorType);
}
*/



void ALockAndKey::BeginPlay()
{
	Super::BeginPlay();
	//call when overlapped?
	OnActorBeginOverlap.AddDynamic(this, &ALockAndKey::CheckActorType);

}

void ALockAndKey::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{
	//if other actor is player chr(maze character)
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
		OpenTheDoor();
}

void ALockAndKey::OpenTheDoor()
{
	this->Destroy();
}
