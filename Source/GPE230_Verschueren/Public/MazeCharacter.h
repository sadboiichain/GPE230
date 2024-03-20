// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Blueprint/UserWidget.h"
#include "MazeCharacter.generated.h"


UCLASS()
class GPE230_VERSCHUEREN_API AMazeCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMazeCharacter();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//maximum and starting health for this character
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float maxHealth;

	//add health
	UFUNCTION()
	void heal(float health);

	//add health
	UFUNCTION()
	void doubleSpeed(float speed);

	bool isAtMax();

	
	//more ui code
	virtual void OpenVictoryScreen();
	
protected:
	virtual void OpenGameOverScreen();
	virtual void PauseGameplay(bool bIsPaused);
	virtual void ShowMouseCursor();
	
private:
	UPROPERTY(EditAnywhere)
	float moveSpeed;
	UPROPERTY(EditAnywhere)
	float rotationSpeed;

private:

	//ANIM TO PLAY WHEN CHARACTER DIES
	UPROPERTY(EditAnywhere)
	UAnimSequence* _deathAnim;

	//is player ready to restart?
	bool _isDead = false;

	void MoveFB(float value);
	void MoveLR(float value);
	void Rotate(float value);


	//particle effects system
	UPROPERTY(EditAnywhere)
	UNiagaraSystem* _stunSystem;

	//start the particle effects
	UFUNCTION(BlueprintCallable)
	void ActivateStunParticleSystem();

	//start the particle effects
	UFUNCTION(BlueprintCallable)
	float getCurrentHealth();

protected: 
	//current health for this character
	float _currentHealth;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, 
		AController* EventInstigator, AActor* DamageCauser) override;

	//UI CODE
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> _gameOverScreenTemplate;
	UPROPERTY()
	UUserWidget* _gameOverScreenInstance;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> _victoryScreenTemplate;
	UPROPERTY()
	UUserWidget* _victoryScreenInstance;

	//the controller that manages this character
	APlayerController* _controller;

	virtual void Die();
};
