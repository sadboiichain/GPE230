// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Sound/SoundWave.h"
#include "Kismet/GameplayStatics.h"
#include "NPCEnemy.generated.h"

UCLASS()
class GPE230_VERSCHUEREN_API ANPCEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCEnemy();

	//connecting animation to damage
	UFUNCTION(BlueprintCallable, Category = "Collision")
	void DetectHit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	//sphere trace to get hit info
	UPROPERTY(EditAnywhere)
	float _TraceRadius = 500.0f;

	//name of npc fist
	UPROPERTY(EditAnywhere)
	FName _PunchingHandSocketName;

	//dmg per punch
	UPROPERTY(EditAnywhere)
	float _HitDamage;

	//punch sound
	UPROPERTY(EditAnywhere)
	USoundWave* _punchSound;

};
