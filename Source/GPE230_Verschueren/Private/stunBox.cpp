// Fill out your copyright notice in the Description page of Project Settings.


#include "stunBox.h"
#include "MazeCharacter.h"

void AstunBox::BeginPlay()
{
	Super::BeginPlay();
	//call when overlapped
	OnActorBeginOverlap.AddDynamic(this, &AstunBox::CheckActorType);
}

void AstunBox::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{
	//if other actor is player chr(maze character)
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
	{
		Apply(Cast<AMazeCharacter>(OtherActor));
		destroySelf();
	}
}

void AstunBox::Apply(AMazeCharacter* player)
{
	//player->halfStun(stunCooldown);
}

void AstunBox::destroySelf()
{
	this->Destroy();
}
