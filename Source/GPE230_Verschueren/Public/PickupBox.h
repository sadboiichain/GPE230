// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Sound/SoundWave.h"
#include "Kismet/GameplayStatics.h"
#include "PickupBox.generated.h"

/**
 * 
 */
UCLASS()
class GPE230_VERSCHUEREN_API APickupBox : public ATriggerBox
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

	//pickup sound
	UPROPERTY(EditAnywhere)
	USoundWave* _pickupSound;

	//play sound
	UFUNCTION()
	void PlaySound();

};
