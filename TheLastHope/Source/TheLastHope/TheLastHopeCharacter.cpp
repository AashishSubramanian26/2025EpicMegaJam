// Copyright Epic Games, Inc. All Rights Reserved.

#include "TheLastHopeCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "CableComponent.h"
#include "AttachStar.h"
#include "Components/ArrowComponent.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ATheLastHopeCharacter

ATheLastHopeCharacter::ATheLastHopeCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	GetMesh()->SetHiddenInGame(true);
	GetMesh()->SetSkeletalMesh(nullptr);

	//Visual sphere
	SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereVisual"));
	SphereVisual->SetupAttachment(GetCapsuleComponent());

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereRef(
		TEXT("/Engine/BasicShapes/Sphere.Sphere")
	);
	if (SphereRef.Succeeded())
	{
		SphereVisual->SetStaticMesh(SphereRef.Object);
	}
		
	// Place it so it touches the ground:
	const float CapsuleHalfHeight = GetCapsuleComponent()->GetUnscaledCapsuleHalfHeight(); // 96
	const float SphereRadius = 50.f; // default engine sphere
	SphereVisual->SetRelativeLocation(FVector(0.f, 0.f, -CapsuleHalfHeight + SphereRadius));

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->AirControl = 0.35f;
	//GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	GetCharacterMovement()->JumpZVelocity = JumpVelocity;
	GetCharacterMovement()->GravityScale = 0.5;
	GetCharacterMovement()->bApplyGravityWhileJumping = false; 

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)


	CableVisual = CreateDefaultSubobject<UCableComponent>(TEXT("CableVisual"));
	CableVisual->SetupAttachment(SphereVisual);
	CableVisual->NumSegments = 1;
	CableVisual->SetVisibility(false);
	CableVisual->bEnableStiffness = true;   // optional: nicer feel

	//CableVisual = CreateDefaultSubobject<UCableComponent>(TEXT("CableVisual"));
	//CableVisual->SetupAttachment(SphereVisual);

	//// real starting length, not 1
	////CableVisual->CableLength = 2000.f;
	////CableVisual->NumSegments = 20;          // optional: smoother
	//CableVisual->bEnableStiffness = true;   // optional: nicer feel

	//CableVisual->SetVisibility(false);

	// Debug arrow that rides the sphere surface and points where we look
	AimArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("AimArrow"));
	AimArrow->SetupAttachment(SphereVisual);
	AimArrow->SetRelativeLocation(FVector::ZeroVector);
	AimArrow->SetRelativeRotation(FRotator::ZeroRotator);
	AimArrow->SetMobility(EComponentMobility::Movable);
	AimArrow->ArrowColor = FColor::Yellow;
	AimArrow->ArrowSize = 1.5f;          // tweak visual size
	AimArrow->bHiddenInGame = false;      // show in game

}

void ATheLastHopeCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}

	PrimaryActorTick.bCanEverTick = true;   // allow ticking
}

void ATheLastHopeCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	if (isGrappling)
	{
		// If we didn’t attach the end, keep the free end at GrabPointer (local space)
		if (!CableVisual->bAttachEnd)
		{
			const FTransform CableXf = CableVisual->GetComponentTransform();
			CableVisual->EndLocation = CableXf.InverseTransformPosition(GrabPointer);
		}

		FVector From = GetActorLocation();
		FVector To = GrabPointer;
		FVector Dir = (To - From);
		if (!Dir.IsNearlyZero()) { Dir.Normalize(); }

		FVector RightInfluence = GetActorRightVector() * MoveRightLeft;

		FVector Combined = Dir + RightInfluence;
		if (!Combined.IsNearlyZero()) { Combined.Normalize(); }

		const float GrappleForce = 250000.f;
		FVector Force = Combined * GrappleForce;

		GetCharacterMovement()->AddForce(Force);
	}

	if (bIsDashing)
	{
		UCharacterMovementComponent* CM = GetCharacterMovement();
		if (Controller)
		{
			// dash in the camera-facing yaw direction
			const FRotator ControlRot = Controller->GetControlRotation();
			const FRotator YawOnly(0.f, ControlRot.Yaw, 0.f);
			DashDirection = FRotationMatrix(YawOnly).GetUnitAxis(EAxis::X);
		}

		const FVector DesiredVel = DashDirection * DashSpeed;

		// Smoothly drive velocity toward DesiredVel while held
		CM->Velocity = FMath::VInterpTo(CM->Velocity, DesiredVel, DeltaTime, DashAccel);
	}

	// --- DEBUG ARROW update: sit on the sphere and point where we look ---
	if (AimArrow && FollowCamera)
	{
		// Sphere center in world space
		const FVector SphereCenter = SphereVisual->GetComponentLocation();

		// Camera forward (full pitch/yaw, so it tilts up/down with the view)
		FVector LookDir = FollowCamera->GetForwardVector();
		if (!LookDir.IsNearlyZero()) { LookDir = LookDir.GetSafeNormal(); }

		// Use your known sphere radius (50) to place arrow on the surface
		const float SphereRadius = 50.f;

		// A little extra so the arrow doesn't clip into the sphere
		const float SurfaceOffset = 6.f;

		// Position: center + direction * (radius + small offset)
		const FVector ArrowPos = SphereCenter + LookDir * (SphereRadius + SurfaceOffset);

		// Apply world transform so it follows perfectly
		AimArrow->SetWorldLocation(ArrowPos);
		AimArrow->SetWorldRotation(LookDir.Rotation());

		// Optional: scale arrow length by speed for fun
		// float Speed = GetVelocity().Size();
		// AimArrow->SetWorldScale3D(FVector(1.f + Speed * 0.0003f));
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void ATheLastHopeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Started, this, &ATheLastHopeCharacter::StartDash);
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Triggered, this, &ATheLastHopeCharacter::StartDash); // keeps updating aim while held
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Completed, this, &ATheLastHopeCharacter::StopDash);
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Canceled, this, &ATheLastHopeCharacter::StopDash);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATheLastHopeCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ATheLastHopeCharacter::Look);

		//Grapple
		EnhancedInputComponent->BindAction(GrappleAction, ETriggerEvent::Started, this, &ATheLastHopeCharacter::Grapple);
		EnhancedInputComponent->BindAction(GrappleAction, ETriggerEvent::Completed, this, &ATheLastHopeCharacter::StopGrapple); 
		//EnhancedInputComponent->BindAction(GrappleAction, ETriggerEvent::Triggered, this, &ATheLastHopeCharacter::Grapple);  
		EnhancedInputComponent->BindAction(GrappleAction, ETriggerEvent::Canceled, this, &ATheLastHopeCharacter::StopGrapple);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ATheLastHopeCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();
	MoveRightLeft = MovementVector.X;

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);

		//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Moving!"));
	}
}

void ATheLastHopeCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void ATheLastHopeCharacter::Grapple(const FInputActionValue& Value) {
	// input is a Vector2D
	//FVector2D Input = Value.Get<FVector2D>();


	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("ENTERED GRAPPLE"));

	if (Controller != nullptr) {
		FVector StartLocation=  FollowCamera->GetComponentLocation() /*+ FVector(400.0f, 0.0f, 0.0f)*/;
		FRotator EndRotation = FollowCamera->GetComponentRotation();
		FVector EndLocation = EndRotation.Vector();
		EndLocation *= float(6000);
		EndLocation += StartLocation; 

		// --- Debug so you can SEE it and know it fired ---
		UE_LOG(LogTemplateCharacter, Log, TEXT("Grapple fired. Start=%s End=%s"),
			*StartLocation.ToString(), *EndLocation.ToString());
		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Grapple pressed!"));


		FHitResult HitResult;
		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this);

		bool bHit = GetWorld()->LineTraceSingleByChannel(
			HitResult,
			StartLocation,
			EndLocation,
			ECC_Visibility,
			QueryParams
		);

		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, false, 5.0f, 0, 2.5f);

		if (bHit == true)
		{
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Did hit object"));

			AAttachStar* Star = Cast<AAttachStar>(HitResult.GetActor());
			if (!Star) {
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Hit something, but not an AttachStar"));
				return; // do nothing if it's not our target class
			}

			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Did hit AttachStar"));

			GrabPointer = HitResult.ImpactPoint;
			isGrappling = true;

			GetCharacterMovement()->SetMovementMode(MOVE_Flying, 0);

			// Attach cable end to the hit component so it sticks there
			if (HitResult.Component.IsValid())
			{
				CableVisual->SetAttachEndToComponent(HitResult.Component.Get(), NAME_None);
				CableVisual->bAttachEnd = true;
			}

			// Make rope about the distance to target so it looks right immediately
			const float Dist = FVector::Distance(CableVisual->GetComponentLocation(), GrabPointer);
			CableVisual->CableLength = FMath::Max(Dist * 1.05f, 100.f);

			CableVisual->SetVisibility(true);
		}

		else {
			if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Did not hit object"));
		}
	}
}

void ATheLastHopeCharacter::StopGrapple(const FInputActionValue& Value) {
	isGrappling = false;
	//GetCharacterMovement()->SetMovementMode(MOVE_Falling, 0);

	// Detach end so next shot starts “free”
	CableVisual->SetAttachEndTo(nullptr, NAME_None);
	CableVisual->bAttachEnd = false;

	CableVisual->SetVisibility(false);

	if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Let go of grapple"));
}

void ATheLastHopeCharacter::StartDash(const FInputActionValue& Value) {
	// Face direction: use controller yaw (so dash goes where camera is looking horizontally)
	const FRotator ControlRot = (Controller ? Controller->GetControlRotation() : GetActorRotation());
	const FRotator YawOnly(0.f, ControlRot.Yaw, 0.f);
	DashDirection = FRotationMatrix(YawOnly).GetUnitAxis(EAxis::X); // forward

	// Start/refresh dash every frame while held
	if (!bIsDashing)
	{
		bIsDashing = true;

		// save & reduce braking so dash feels snappy
		UCharacterMovementComponent* CM = GetCharacterMovement();
		SavedGroundFriction = CM->GroundFriction;
		SavedBrakingDecelWalking = CM->BrakingDecelerationWalking;

		CM->GroundFriction = 0.f;
		CM->BrakingDecelerationWalking = 0.f;
	}
}

void ATheLastHopeCharacter::StopDash(const FInputActionValue& Value) {
	if (!bIsDashing) return;
	bIsDashing = false;

	// restore movement feel
	UCharacterMovementComponent* CM = GetCharacterMovement();
	CM->GroundFriction = SavedGroundFriction;
	CM->BrakingDecelerationWalking = SavedBrakingDecelWalking;
}