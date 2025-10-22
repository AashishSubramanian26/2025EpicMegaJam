// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MassExchangeComponent.generated.h"


UCLASS( Blueprintable, EditInlineNew, DefaultToInstanced, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THELASTHOPE_API UMassExchangeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMassExchangeComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    // Adds Mass to the CurrentMassValue
	UFUNCTION(BlueprintCallable, Category = "Mass Exchange")
		void AddMass(float MassAmount);

	// Does all the things the actor should do when it needs to be destroyed
	UFUNCTION(BlueprintCallable, Category = "Mass Exchange")
		void DestroyFunctions();
	
	// Determines how to handle an exchange of mass for a default actor
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Mass Exchange")
		void HandleMassPlayer(UMassExchangeComponent* OtherMEComponent);
	
	// Determines how to handle an exchange of mass for a default actor and another actor
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Mass Exchange")
		void HandleMass(UMassExchangeComponent* OtherMEComponent); 

	
	// The Current Mass of the Actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mass Exchange")
		float CurrentMassValue;

};
