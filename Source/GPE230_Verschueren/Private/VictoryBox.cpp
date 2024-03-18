// Fill out your copyright notice in the Description page of Project Settings.


#include "VictoryBox.h"
#include "MazeCharacter.h"

void AVictoryBox::BeginPlay()
{
	Super::BeginPlay();
	//call when overlapped
	OnActorBeginOverlap.AddDynamic(this, &AVictoryBox::CheckActorType);

}

void AVictoryBox::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{
	UE_LOG(LogTemp, Log, TEXT("Player overlapped."));
	//if other actor is player chr(maze character)
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
	{
		Apply(Cast<AMazeCharacter>(OtherActor));
		UE_LOG(LogTemp, Log, TEXT("Player attempted to win."));
	}
}

void AVictoryBox::Apply(AMazeCharacter* player)
{
	player->OpenVictoryScreen();
}
