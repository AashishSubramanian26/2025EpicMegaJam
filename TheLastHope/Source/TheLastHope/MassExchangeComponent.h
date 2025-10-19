// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MassExchangeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
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

	UFUNCTION(BlueprintCallable, Category = "Mass Exchange")
	void AddMass(float MassAmount);

	UFUNCTION(BlueprintCallable, Category = "Mass Exchange")
	void RemoveMass(float MassAmount);

	UFUNCTION(BlueprintCallable, Category = "Mass Exchange")
	void CheckMassEmpty();

	UFUNCTION(BlueprintCallable, Category = "Mass Exchange")
	void DestroyFunctions();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mass Exchange")
	float CurrentMassValue;
};
