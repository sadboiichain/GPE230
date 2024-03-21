// Fill out your copyright notice in the Description page of Project Settings.


#include "LockAndKey.h"
#include "MazeCharacter.h"


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
	{
		PlaySound();
		OpenTheDoor();
	}
		
}

void ALockAndKey::OpenTheDoor()
{
	this->Destroy();
}

void ALockAndKey::PlaySound()
{
	//play sound
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), _doorSound, GetActorLocation());
}
