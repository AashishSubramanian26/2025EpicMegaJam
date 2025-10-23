// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheLastHope/EnemyBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	THELASTHOPE_API UClass* Z_Construct_UClass_AEnemyBase();
	THELASTHOPE_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
	THELASTHOPE_API UClass* Z_Construct_UClass_UMassExchangeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheLastHope();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyBase::execEndHitCoolDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndHitCoolDown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execStartHitCoolDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartHitCoolDown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execResetHitCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetHitCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AEnemyBase::execOnCollisionBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollisionBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_AEnemyBase_EndHitCoolDown = FName(TEXT("EndHitCoolDown"));
	void AEnemyBase::EndHitCoolDown()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemyBase_EndHitCoolDown),NULL);
	}
	static FName NAME_AEnemyBase_StartHitCoolDown = FName(TEXT("StartHitCoolDown"));
	void AEnemyBase::StartHitCoolDown()
	{
		ProcessEvent(FindFunctionChecked(NAME_AEnemyBase_StartHitCoolDown),NULL);
	}
	void AEnemyBase::StaticRegisterNativesAEnemyBase()
	{
		UClass* Class = AEnemyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndHitCoolDown", &AEnemyBase::execEndHitCoolDown },
			{ "OnCollisionBeginOverlap", &AEnemyBase::execOnCollisionBeginOverlap },
			{ "ResetHitCooldown", &AEnemyBase::execResetHitCooldown },
			{ "StartHitCoolDown", &AEnemyBase::execStartHitCoolDown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyBase_EndHitCoolDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_EndHitCoolDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Exchange" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can be overridden for visual or audio effects on hit cooldown end\n" },
#endif
		{ "ModuleRelativePath", "EnemyBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can be overridden for visual or audio effects on hit cooldown end" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_EndHitCoolDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "EndHitCoolDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_EndHitCoolDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyBase_EndHitCoolDown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyBase_EndHitCoolDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyBase_EndHitCoolDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics
	{
		struct EnemyBase_eventOnCollisionBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBase_eventOnCollisionBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OverlappedComp_MetaData), Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OverlappedComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBase_eventOnCollisionBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBase_eventOnCollisionBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBase_eventOnCollisionBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((EnemyBase_eventOnCollisionBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EnemyBase_eventOnCollisionBeginOverlap_Parms), &Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyBase_eventOnCollisionBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// On Begin Overlap of the Sphere Collision of the Body\n" },
#endif
		{ "ModuleRelativePath", "EnemyBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On Begin Overlap of the Sphere Collision of the Body" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "OnCollisionBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::EnemyBase_eventOnCollisionBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::EnemyBase_eventOnCollisionBeginOverlap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_ResetHitCooldown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_ResetHitCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_ResetHitCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "ResetHitCooldown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_ResetHitCooldown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyBase_ResetHitCooldown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyBase_ResetHitCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyBase_ResetHitCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemyBase_StartHitCoolDown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBase_StartHitCoolDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Exchange" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Can be overridden for visual or audio effects on hit cooldown start\n" },
#endif
		{ "ModuleRelativePath", "EnemyBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Can be overridden for visual or audio effects on hit cooldown start" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBase_StartHitCoolDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBase, nullptr, "StartHitCoolDown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBase_StartHitCoolDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyBase_StartHitCoolDown_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyBase_StartHitCoolDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyBase_StartHitCoolDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyBase);
	UClass* Z_Construct_UClass_AEnemyBase_NoRegister()
	{
		return AEnemyBase::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollisionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassExchangeComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MassExchangeComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCooldownDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitCooldownDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheLastHope,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyBase_EndHitCoolDown, "EndHitCoolDown" }, // 2597300432
		{ &Z_Construct_UFunction_AEnemyBase_OnCollisionBeginOverlap, "OnCollisionBeginOverlap" }, // 2168039685
		{ &Z_Construct_UFunction_AEnemyBase_ResetHitCooldown, "ResetHitCooldown" }, // 2373655190
		{ &Z_Construct_UFunction_AEnemyBase_StartHitCoolDown, "StartHitCoolDown" }, // 186013148
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemyBase.h" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_Body_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_Body_MetaData), Z_Construct_UClass_AEnemyBase_Statics::NewProp_Body_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_SphereCollisionComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_SphereCollisionComp = { "SphereCollisionComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, SphereCollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_SphereCollisionComp_MetaData), Z_Construct_UClass_AEnemyBase_Statics::NewProp_SphereCollisionComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_MassExchangeComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_MassExchangeComp = { "MassExchangeComp", nullptr, (EPropertyFlags)0x002208000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, MassExchangeComp), Z_Construct_UClass_UMassExchangeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_MassExchangeComp_MetaData), Z_Construct_UClass_AEnemyBase_Statics::NewProp_MassExchangeComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitCooldownDuration_MetaData[] = {
		{ "Category", "Mass Exchange" },
		{ "ModuleRelativePath", "EnemyBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitCooldownDuration = { "HitCooldownDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBase, HitCooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitCooldownDuration_MetaData), Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitCooldownDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_SphereCollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_MassExchangeComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBase_Statics::NewProp_HitCooldownDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBase_Statics::ClassParams = {
		&AEnemyBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyBase()
	{
		if (!Z_Registration_Info_UClass_AEnemyBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyBase.OuterSingleton, Z_Construct_UClass_AEnemyBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyBase.OuterSingleton;
	}
	template<> THELASTHOPE_API UClass* StaticClass<AEnemyBase>()
	{
		return AEnemyBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBase);
	AEnemyBase::~AEnemyBase() {}
	struct Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_EnemyBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_EnemyBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyBase, AEnemyBase::StaticClass, TEXT("AEnemyBase"), &Z_Registration_Info_UClass_AEnemyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyBase), 1465569911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_EnemyBase_h_117678919(TEXT("/Script/TheLastHope"),
		Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_EnemyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_EnemyBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
