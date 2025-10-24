// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "Engine/World.h"
#include "TheLastHopeCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class UCableComponent;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class ATheLastHopeCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* DashAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* GrappleAction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visual", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* SphereVisual;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visual", meta = (AllowPrivateAccess = "true"))
	UCableComponent* CableVisual;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Debug", meta = (AllowPrivateAccess = "true"))
	UArrowComponent* AimArrow;  

public:
	ATheLastHopeCharacter();
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement", meta = (ClampMin = "0"))
	float WalkSpeed = 1500.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement", meta = (ClampMin = "0"))
	float JumpVelocity = 700.f;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool isGrappling = false; 

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FVector GrabPointer;
	float MoveRightLeft = 0.f;

	// --- DASH (NEW) ---
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Dash", meta = (ClampMin = "0"))
	float DashSpeed = 2400.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Dash", meta = (ClampMin = "0"))
	float DashAccel = 25000.f; // used for smoothing

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Dash")
	bool bIsDashing = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dash")
	FVector DashDirection = FVector::ZeroVector;

	// How far the grapple can reach when we shoot from the center of the screen
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Grapple")
	float GrappleMaxDistance = 6000.f;

	// Do we actually have something we can pull toward (AttachStar)?
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grapple")
	bool bHasValidGrappleTarget = false;




protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	void Grapple(const FInputActionValue& Value);

	void StopGrapple(const FInputActionValue& Value);
			
	void StartDash(const FInputActionValue& Value);

	void StopDash(const FInputActionValue& Value);

	// cache to restore movement feel after dash
	float SavedGroundFriction = 0.f;
	float SavedBrakingDecelWalking = 0.f;

	// Save/restore movement mode while dashing (so Z motion works)
	uint8 SavedMovementMode = MOVE_Walking;
	uint8 SavedCustomMovementMode = 0;


protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

	virtual void Tick(float DeltaTime) override;

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

