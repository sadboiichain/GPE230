// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "Pickups.generated.h"

/**
 * 
 */
UCLASS()
class GPE230_VERSCHUEREN_API APickups : public ATriggerVolume
{
	GENERATED_BODY()

public:

	//links the override when the game starts
	virtual void BeginPlay() override;
	
	//create ufunction check actor type to check if other actor is player chr
	UFUNCTION()
	void CheckActorType(class AActor* OverlappedActor, class AActor* OtherActor);

	//complete actions
	UFUNCTION()
	virtual void Apply(AMazeCharacter* player);

protected:

	//destroy item
	UFUNCTION()
	void destroySelf();

};
