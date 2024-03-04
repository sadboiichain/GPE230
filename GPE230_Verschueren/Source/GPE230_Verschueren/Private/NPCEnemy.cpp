// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCEnemy.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/DamageType.h"

// Sets default values
ANPCEnemy::ANPCEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANPCEnemy::DetectHit()
{
	bool canDamage = true;

	//get location of fist
	const FVector PunchLocation = GetMesh()->GetSocketLocation(_PunchingHandSocketName);

	//arrays to avoid detection of it or connected controller
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);
	ActorsToIgnore.Add(GetOwner());

	//array for actors hit
	TArray<FHitResult> HitArray;

	//spheretrace around fist to get overlapped actor, return true if any hit
	const bool Hit = UKismetSystemLibrary::SphereTraceMulti(GetWorld(), 
		PunchLocation, PunchLocation, _TraceRadius, 
		UEngineTypes::ConvertToTraceType(ECC_Camera), false, ActorsToIgnore, 
		EDrawDebugTrace::None, HitArray, true, FLinearColor::Red, 
		FLinearColor::Green, 2.0f);

	//name of actor for debugging
	FString ownerName = this->GetName();

	//if valid hit was created
	if (Hit)
	{
		//for each object that was hit
		for (const FHitResult HitResult : HitArray)
		{
			//if they can be damaged
			if (canDamage)
			{
				//debugging victim
				FString hitActorName = HitResult.GetActor()->GetName();

				UE_LOG(LogTemp, Log, TEXT("NPCEnemy actor \"%s\" hit other actor\"%s\", dealing %f of damage."),
					*ownerName, *hitActorName, _HitDamage);

				//apply generic damage
				UGameplayStatics::ApplyDamage(HitResult.GetActor(),
					_HitDamage, GetController(), this, UDamageType::StaticClass());

				canDamage = false;

			}
		}
	}
	//no valid damage
	else
	{

		UE_LOG(LogTemp, Log, TEXT("NPCEnemy actor \"%s\" did not detect any valid hits on last attack."),
			*ownerName);
	}
}

// Called when the game starts or when spawned
void ANPCEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANPCEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPCEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

