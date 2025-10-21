// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassExchange.h"
#include "MassExchangeComponent.h"
#include "GameFramework/Actor.h"
#include "EnemyBase.generated.h"

UCLASS()
class THELASTHOPE_API AEnemyBase : public AActor
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

	// On Hit of the Body Mesh
	UFUNCTION()
		void OnBodyHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Hit Cooldown Timer
	FTimerHandle HitCooldownTimer;

	// Duration of Hit Cooldown
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mass Exchange")
	float HitCooldownDuration = 0.1f;

	// Resets the Hit Cooldown
	UFUNCTION()
	void ResetHitCooldown();

	// Can be overridden for visual or audio effects on hit cooldown start
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Mass Exchange")
	void StartHitCoolDown();

	// Can be overridden for visual or audio effects on hit cooldown end
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Mass Exchange")
	void EndHitCoolDown();
	
	bool bInHitCooldown = false;
};