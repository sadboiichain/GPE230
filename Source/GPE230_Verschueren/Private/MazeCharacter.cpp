// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeCharacter.h"

// Sets default values
AMazeCharacter::AMazeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMazeCharacter::BeginPlay()
{
	Super::BeginPlay();

	//set current health to max health
	_currentHealth = maxHealth;

	//ui code
	_controller = Cast<APlayerController>(GetController());

	_gameOverScreenInstance = CreateWidget(GetWorld(), _gameOverScreenTemplate);
	_victoryScreenInstance = CreateWidget(GetWorld(), _victoryScreenTemplate);
}

float AMazeCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (!_isDead)
	{


		//subtract incoming damage
		_currentHealth = _currentHealth - DamageAmount;

		//print damage for log/debug
		UE_LOG(LogTemp, Log, TEXT("Player took %f damage. %f health remaining."), DamageAmount, _currentHealth);

		//check for death
		if (_currentHealth <= 0)
		{
			Die();
		}

		return DamageAmount;
	}
	else return 0;
}


void AMazeCharacter::Die()
{
	//stops player inputs
	_isDead = true;
	_currentHealth = 0;
	moveSpeed = 0;
	rotationSpeed = 0;

	GetMesh()->PlayAnimation(_deathAnim, false);

	//trigger game over state
	OpenGameOverScreen();
}

// Called every frame
void AMazeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMazeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveFB", this, &AMazeCharacter::MoveFB);
	PlayerInputComponent->BindAxis("MoveLR", this, &AMazeCharacter::MoveLR);
	PlayerInputComponent->BindAxis("Rotate", this, &AMazeCharacter::Rotate);
}

void AMazeCharacter::heal(float health)
{
	if (!_isDead)
	{
		//add health
		_currentHealth = _currentHealth + health;

		//print for log/debug
		UE_LOG(LogTemp, Log, TEXT("Player healed %f damage. %f health remaining."), health, _currentHealth);

	}

}

void AMazeCharacter::doubleSpeed(float speed)
{
	moveSpeed += speed;
}



void AMazeCharacter::OpenVictoryScreen()
{
	_victoryScreenInstance->AddToViewport();
	PauseGameplay(true);
	ShowMouseCursor();
}

void AMazeCharacter::OpenGameOverScreen()
{
	
	_gameOverScreenInstance->AddToViewport();
	ShowMouseCursor();
	
}

void AMazeCharacter::PauseGameplay(bool bIsPaused)
{
	_controller->SetPause(bIsPaused);
}

void AMazeCharacter::ShowMouseCursor()
{
	_controller->bShowMouseCursor = true;

}


void AMazeCharacter::MoveFB(float value)
{
	AddMovementInput(GetActorForwardVector(), value * moveSpeed);
}

void AMazeCharacter::MoveLR(float value)
{
	AddMovementInput(-GetActorRightVector(), value * moveSpeed);
}

void AMazeCharacter::Rotate(float value)
{
	AddControllerYawInput(value * rotationSpeed);
}

void AMazeCharacter::ActivateStunParticleSystem()
{
	if (_stunSystem)
	{
		USceneComponent* AttachComp = GetDefaultAttachComponent();
		
		UNiagaraComponent* NiagaraComp = UNiagaraFunctionLibrary::SpawnSystemAttached(_stunSystem, 
			AttachComp, NAME_None, FVector(0), FRotator(0), EAttachLocation::Type::KeepRelativeOffset, true );
	
		NiagaraComp->Activate();

	}
	else
	{
		//print damage for log/debug
		UE_LOG(LogTemp, Log, TEXT("Player attempted to use particle system, but no template particle system was found."));
	}
	
}

float AMazeCharacter::getCurrentHealth()
{
	return _currentHealth;
}

