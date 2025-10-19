// Fill out your copyright notice in the Description page of Project Settings.


#include "MassExchangeComponent.h"

#include "EntitySystem/MovieSceneEntitySystemRunner.h"

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
}

void UMassExchangeComponent::RemoveMass(float MassAmount)
{
	CurrentMassValue = std::max(0.0f, CurrentMassValue - MassAmount);
	CheckMassEmpty();
	
}

void UMassExchangeComponent::CheckMassEmpty()
{
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
