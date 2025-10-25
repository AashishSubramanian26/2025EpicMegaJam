// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheLastHope/TheLastHopeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheLastHopeCharacter() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	THELASTHOPE_API UClass* Z_Construct_UClass_ATheLastHopeCharacter();
	THELASTHOPE_API UClass* Z_Construct_UClass_ATheLastHopeCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheLastHope();
// End Cross Module References
	void ATheLastHopeCharacter::StaticRegisterNativesATheLastHopeCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATheLastHopeCharacter);
	UClass* Z_Construct_UClass_ATheLastHopeCharacter_NoRegister()
	{
		return ATheLastHopeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATheLastHopeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DashAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrappleAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GrappleAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereVisual_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereVisual;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableVisual_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CableVisual;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isGrappling_MetaData[];
#endif
		static void NewProp_isGrappling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isGrappling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabPointer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashAccel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashAccel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDashing_MetaData[];
#endif
		static void NewProp_bIsDashing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDashing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DashDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheLastHopeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TheLastHope,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TheLastHopeCharacter.h" },
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashAction = { "DashAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, DashAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashAction_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_GrappleAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_GrappleAction = { "GrappleAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, GrappleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_GrappleAction_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_GrappleAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_SphereVisual_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_SphereVisual = { "SphereVisual", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, SphereVisual), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_SphereVisual_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_SphereVisual_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_CableVisual_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_CableVisual = { "CableVisual", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, CableVisual), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_CableVisual_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_CableVisual_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_WalkSpeed_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_WalkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_JumpVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_JumpVelocity = { "JumpVelocity", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, JumpVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_JumpVelocity_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_JumpVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_isGrappling_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TheLastHopeCharacter" },
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_isGrappling_SetBit(void* Obj)
	{
		((ATheLastHopeCharacter*)Obj)->isGrappling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_isGrappling = { "isGrappling", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATheLastHopeCharacter), &Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_isGrappling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_isGrappling_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_isGrappling_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_GrabPointer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TheLastHopeCharacter" },
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_GrabPointer = { "GrabPointer", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, GrabPointer), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_GrabPointer_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_GrabPointer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashSpeed_MetaData[] = {
		{ "Category", "Dash" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- DASH (NEW) ---\n" },
#endif
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- DASH (NEW) ---" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashSpeed = { "DashSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, DashSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashSpeed_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashAccel_MetaData[] = {
		{ "Category", "Dash" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashAccel = { "DashAccel", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, DashAccel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashAccel_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashAccel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_bIsDashing_MetaData[] = {
		{ "Category", "Dash" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// used for smoothing\n" },
#endif
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "used for smoothing" },
#endif
	};
#endif
	void Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_bIsDashing_SetBit(void* Obj)
	{
		((ATheLastHopeCharacter*)Obj)->bIsDashing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_bIsDashing = { "bIsDashing", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATheLastHopeCharacter), &Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_bIsDashing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_bIsDashing_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_bIsDashing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashDirection_MetaData[] = {
		{ "Category", "Dash" },
		{ "ModuleRelativePath", "TheLastHopeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashDirection = { "DashDirection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATheLastHopeCharacter, DashDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashDirection_MetaData), Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashDirection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATheLastHopeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_GrappleAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_SphereVisual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_CableVisual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_WalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_JumpVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_isGrappling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_GrabPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashAccel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_bIsDashing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATheLastHopeCharacter_Statics::NewProp_DashDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheLastHopeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheLastHopeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheLastHopeCharacter_Statics::ClassParams = {
		&ATheLastHopeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATheLastHopeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheLastHopeCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATheLastHopeCharacter()
	{
		if (!Z_Registration_Info_UClass_ATheLastHopeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheLastHopeCharacter.OuterSingleton, Z_Construct_UClass_ATheLastHopeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATheLastHopeCharacter.OuterSingleton;
	}
	template<> THELASTHOPE_API UClass* StaticClass<ATheLastHopeCharacter>()
	{
		return ATheLastHopeCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheLastHopeCharacter);
	ATheLastHopeCharacter::~ATheLastHopeCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_TheLastHopeCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_TheLastHopeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATheLastHopeCharacter, ATheLastHopeCharacter::StaticClass, TEXT("ATheLastHopeCharacter"), &Z_Registration_Info_UClass_ATheLastHopeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheLastHopeCharacter), 274325956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_TheLastHopeCharacter_h_1612088640(TEXT("/Script/TheLastHope"),
		Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_TheLastHopeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_TheLastHopeCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
