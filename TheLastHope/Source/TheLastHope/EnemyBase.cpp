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
	Body->SetupAttachment(RootComponent);
	Body->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	MassExchangeComp = CreateDefaultSubobject<UMassExchangeComponent>(TEXT("MassExchangeComponent"));
	
	// Set up Collision
	SphereCollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollisionComponent"));
	SphereCollisionComp->SetupAttachment(Body);
	SphereCollisionComp->SetSphereRadius(10.0f);
	SphereCollisionComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	//SphereCollisionComp->SetMobility(EComponentMobility::Movable);
	SphereCollisionComp->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void AEnemyBase::BeginPlay()
{
	Super::BeginPlay();
	SphereCollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBase::OnCollisionBeginOverlap);
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

void AEnemyBase::OnCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (OtherActor == this)
	{
		return;
	}
	
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Entered Overlap"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, GetName());
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, OtherActor->GetName());
	
	UMassExchangeComponent* OtherMEComponent = Cast<UMassExchangeComponent>(OtherActor->GetComponentByClass(UMassExchangeComponent::StaticClass()));
	
	if (OtherMEComponent)
	{
		// Enter Hit Cooldown
		// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Found Mass Exchange"));
		
		if (!bInHitCooldown)
		{
			bInHitCooldown = true;
			GetWorld()->GetTimerManager().SetTimer(HitCooldownTimer, this, &AEnemyBase::ResetHitCooldown, HitCooldownDuration, false);
			StartHitCoolDown();
			
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Cooldown Overlap"));
			
			if (OtherActor == UGameplayStatics::GetPlayerPawn(this, 0))
			{
				MassExchangeComp->HandleMassPlayer(OtherMEComponent);
				// This is the player
				//OtherMEComponent->HandleMass(MassExchangeComp);
			}
			else
			{
				MassExchangeComp->HandleMass(OtherMEComponent);
			}
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Failed Cast to Mass Exchange"));
	}
}
