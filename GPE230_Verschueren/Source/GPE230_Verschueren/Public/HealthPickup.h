// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickups.h"
#include "MazeCharacter.h"
#include "HealthPickup.generated.h"


/**
 * 
 */
UCLASS()
class GPE230_VERSCHUEREN_API AHealthPickup : public APickups
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	float HealAmount;

	//links the override when the game starts
	virtual void BeginPlay() override;

	//create ufunction check actor type to check if other actor is player chr
	void CheckActorType(class AActor* OverlappedActor, class AActor* OtherActor);

	//complete actions
	void Apply(AMazeCharacter* player);

protected:

	//destroy item
	void destroySelf();

};
