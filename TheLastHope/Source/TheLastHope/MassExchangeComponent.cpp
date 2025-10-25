// Fill out your copyright notice in the Description page of Project Settings.


#include "MassExchangeComponent.h"

#include "EntitySystem/MovieSceneEntitySystemRunner.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UMassExchangeComponent::UMassExchangeComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Default Mass Value of anything
	CurrentMassValue = 100.0f;
}


// Called when the game starts
void UMassExchangeComponent::BeginPlay()
{
	Super::BeginPlay();
	//UpdateActorScale();

	// ...
	
}

// Called every frame
void UMassExchangeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMassExchangeComponent::AddMass(float MassAmount)
{
	CurrentMassValue += MassAmount;
	if (CurrentMassValue <= 0.0f)
	{
		DestroyFunctions();
	}
}

void UMassExchangeComponent::DestroyFunctions()
{
	if (AActor* Owner = GetOwner())
	{
		Owner->Destroy();
	}
}

void UMassExchangeComponent::ExchangeMass_Implementation(UMassExchangeComponent* Gainer, UMassExchangeComponent* Loser)
{
	float const GainerOldMass = Gainer->CurrentMassValue;
	float const LoserOldMass = Loser->CurrentMassValue;
	Gainer->AddMass(LoserOldMass);
	Loser->AddMass(-GainerOldMass);

	//Gainer->UpdateActorScale();
}

void UMassExchangeComponent::UpdateActorScale_Implementation(float NewMass)
{
	GetOwner()->SetActorScale3D(NewMass/100.0f * FVector(1.0f, 1.0f, 1.0f));
}

void UMassExchangeComponent::HandleMassPlayer_Implementation(UMassExchangeComponent* OtherMEComponent)
{
	HandleMass(OtherMEComponent);
}

void UMassExchangeComponent::HandleMass_Implementation(UMassExchangeComponent* OtherMEComponent)
{
	if (CurrentMassValue >= OtherMEComponent->CurrentMassValue)
	{
		ExchangeMass(this, OtherMEComponent);
	} 
	else
	{
		ExchangeMass(OtherMEComponent, this);
	}
	
	UpdateActorScale(CurrentMassValue);
	OtherMEComponent->UpdateActorScale(OtherMEComponent->CurrentMassValue);
}
