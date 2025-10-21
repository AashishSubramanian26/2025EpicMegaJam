// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBase.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemyBase::AEnemyBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// All enemies need a mesh and a MassExchangeComponent
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));

	//MassExchangeComp = CreateDefaultSubobject<UMassExchangeComponent>(TEXT("MassExchangeComponent"));
	//MassExchangeComp = FindComponentByClass<UMassExchangeComponent>();
	//MassExchangeComp->CurrentMassValue = 50.0f;
	

}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	Body->OnComponentHit.AddDynamic(this, &AEnemyBase::OnBodyHit);
	MassExchangeComp = FindComponentByClass<UMassExchangeComponent>();
	//MassExchangeComp->CurrentMassValue = 50.0f;
}

// Called every frame
void AEnemyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyBase::ResetHitCooldown()
{
	bInHitCooldown = false;
	EndHitCoolDown();
}

void AEnemyBase::EndHitCoolDown_Implementation()
{
	//
}

void AEnemyBase::StartHitCoolDown_Implementation()
{
	//
}

void AEnemyBase::OnBodyHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                           FVector NormalImpulse, const FHitResult& Hit)
{
	UMassExchangeComponent* OtherMEComponent = Cast<UMassExchangeComponent>(OtherActor->GetComponentByClass(UMassExchangeComponent::StaticClass()));
	if (OtherMEComponent)
	{
		// Enter Hit Cooldown
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Something Hit"));
		
		if (!bInHitCooldown)
		{
			bInHitCooldown = true;
			GetWorld()->GetTimerManager().SetTimer(HitCooldownTimer, this, &AEnemyBase::ResetHitCooldown, HitCooldownDuration, false);
			StartHitCoolDown();
			
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Cooldown Hit"));
			
			if (OtherActor == UGameplayStatics::GetPlayerPawn(this, 0))
			{
				MassExchangeComp->HandleMassPlayer(OtherMEComponent);
			}
			else
			{
				MassExchangeComp->HandleMass(OtherMEComponent);
			}
		}
	}
	else
	{
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No Mass Exchange Component hit"));
	}
}
