// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Sound/SoundWave.h"
#include "Kismet/GameplayStatics.h"
#include "LockAndKey.generated.h"

/**
 * 
 */
UCLASS()
class GPE230_VERSCHUEREN_API ALockAndKey : public ATriggerBox
{
	GENERATED_BODY()
	
public:
	//constructor
	//ALockAndKey();

	//links the override when the game starts
	virtual void BeginPlay() override;

	//create ufunction check actor type to check if other actor is player chr
	UFUNCTION()
	void CheckActorType(class AActor* OverlappedActor, class AActor* OtherActor);

	//destroy 
	UFUNCTION()
	void OpenTheDoor();

	//door sound
	UPROPERTY(EditAnywhere)
	USoundWave* _doorSound;

	//play sound
	UFUNCTION()
	void PlaySound();
};
