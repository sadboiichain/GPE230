// Fill out your copyright notice in the Description page of Project Settings.


#include "PickupBox.h"
#include "MazeCharacter.h"

void APickupBox::BeginPlay()
{
	Super::BeginPlay();
	//call when overlapped
	OnActorBeginOverlap.AddDynamic(this, &APickupBox::CheckActorType);
}

void APickupBox::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{
	//if other actor is player chr(maze character)
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
	{
		Apply(Cast <AMazeCharacter>(OtherActor));
		PlaySound();
		destroySelf();
	}
}

void APickupBox::Apply(AMazeCharacter* player)
{
}

void APickupBox::destroySelf()
{
	this->Destroy();
}

void APickupBox::PlaySound()
{
	//play sound
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), _pickupSound, GetActorLocation());

}
