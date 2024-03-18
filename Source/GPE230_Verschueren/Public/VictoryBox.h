// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MazeCharacter.h"
#include "PickupBox.h"
#include "VictoryBox.generated.h"

/**
 * 
 */
UCLASS()
class GPE230_VERSCHUEREN_API AVictoryBox : public APickupBox
{
	GENERATED_BODY()
	
public:
	//links the override when the game starts
	virtual void BeginPlay() override;

	//create ufunction check actor type to check if other actor is player chr
	void CheckActorType(class AActor* OverlappedActor, class AActor* OtherActor);

	//complete actions
	void Apply(AMazeCharacter* player);
};
