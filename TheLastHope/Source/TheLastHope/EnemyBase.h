// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassExchange.h"
#include "MassExchangeComponent.h"
#include "GameFramework/Actor.h"
#include "EnemyBase.generated.h"

UCLASS()
class THELASTHOPE_API AEnemyBase : public AActor, public IMassExchange
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMeshComponent* Body;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UMassExchangeComponent* MassExchangeComp;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};