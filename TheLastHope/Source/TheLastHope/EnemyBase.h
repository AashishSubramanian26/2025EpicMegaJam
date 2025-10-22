// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassExchangeComponent.h"
#include "Components/SphereComponent.h"
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

	// Components
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Components")
	UStaticMeshComponent* Body;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Components")
	USphereComponent* SphereCollisionComp;
	
	UPROPERTY(BlueprintReadOnly, Instanced, EditAnywhere, Category="Components")
	UMassExchangeComponent* MassExchangeComp;

	
	// On Begin Overlap of the Sphere Collision of the Body
	UFUNCTION()
		void OnCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Hit Cooldown Timer
	FTimerHandle HitCooldownTimer;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mass Exchange")
	float HitCooldownDuration = 0.1f;

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