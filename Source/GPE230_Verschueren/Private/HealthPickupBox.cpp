// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthPickupBox.h"
#include "MazeCharacter.h"

void AHealthPickupBox::BeginPlay()
{
	Super::BeginPlay();
	//call when overlapped
	OnActorBeginOverlap.AddDynamic(this, &AHealthPickupBox::CheckActorType);
}

void AHealthPickupBox::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{

	//if other actor is player chr(maze character)
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
	{
		Apply(Cast<AMazeCharacter>(OtherActor));
		destroySelf();
	}
}

void AHealthPickupBox::Apply(AMazeCharacter* player)
{
	if (player->isAtMax()) //if at max
	{
		//print for log/debug
		UE_LOG(LogTemp, Log, TEXT("Player Is at Max health."));

	}
	else
	{
		player->heal(HealAmount);
	}
		
}

void AHealthPickupBox::destroySelf()
{
	this->Destroy();
}
