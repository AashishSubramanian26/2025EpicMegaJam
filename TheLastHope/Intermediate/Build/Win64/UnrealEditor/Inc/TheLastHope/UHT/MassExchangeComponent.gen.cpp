// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheLastHope/MassExchangeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassExchangeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	THELASTHOPE_API UClass* Z_Construct_UClass_UMassExchangeComponent();
	THELASTHOPE_API UClass* Z_Construct_UClass_UMassExchangeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheLastHope();
// End Cross Module References
	DEFINE_FUNCTION(UMassExchangeComponent::execDestroyFunctions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyFunctions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassExchangeComponent::execCheckMassEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckMassEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassExchangeComponent::execRemoveMass)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MassAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMass(Z_Param_MassAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassExchangeComponent::execAddMass)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MassAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMass(Z_Param_MassAmount);
		P_NATIVE_END;
	}
	void UMassExchangeComponent::StaticRegisterNativesUMassExchangeComponent()
	{
		UClass* Class = UMassExchangeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMass", &UMassExchangeComponent::execAddMass },
			{ "CheckMassEmpty", &UMassExchangeComponent::execCheckMassEmpty },
			{ "DestroyFunctions", &UMassExchangeComponent::execDestroyFunctions },
			{ "RemoveMass", &UMassExchangeComponent::execRemoveMass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics
	{
		struct MassExchangeComponent_eventAddMass_Parms
		{
			float MassAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MassAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::NewProp_MassAmount = { "MassAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassExchangeComponent_eventAddMass_Parms, MassAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::NewProp_MassAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Exchange" },
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassExchangeComponent, nullptr, "AddMass", nullptr, nullptr, Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::MassExchangeComponent_eventAddMass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::MassExchangeComponent_eventAddMass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassExchangeComponent_AddMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassExchangeComponent_AddMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassExchangeComponent_CheckMassEmpty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassExchangeComponent_CheckMassEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Exchange" },
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassExchangeComponent_CheckMassEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassExchangeComponent, nullptr, "CheckMassEmpty", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_CheckMassEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassExchangeComponent_CheckMassEmpty_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMassExchangeComponent_CheckMassEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassExchangeComponent_CheckMassEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassExchangeComponent_DestroyFunctions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassExchangeComponent_DestroyFunctions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Exchange" },
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassExchangeComponent_DestroyFunctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassExchangeComponent, nullptr, "DestroyFunctions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_DestroyFunctions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassExchangeComponent_DestroyFunctions_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UMassExchangeComponent_DestroyFunctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassExchangeComponent_DestroyFunctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics
	{
		struct MassExchangeComponent_eventRemoveMass_Parms
		{
			float MassAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MassAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::NewProp_MassAmount = { "MassAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassExchangeComponent_eventRemoveMass_Parms, MassAmount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::NewProp_MassAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Exchange" },
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassExchangeComponent, nullptr, "RemoveMass", nullptr, nullptr, Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::MassExchangeComponent_eventRemoveMass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::MassExchangeComponent_eventRemoveMass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassExchangeComponent_RemoveMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassExchangeComponent_RemoveMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassExchangeComponent);
	UClass* Z_Construct_UClass_UMassExchangeComponent_NoRegister()
	{
		return UMassExchangeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMassExchangeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMassValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMassValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassExchangeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheLastHope,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassExchangeComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassExchangeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassExchangeComponent_AddMass, "AddMass" }, // 367503336
		{ &Z_Construct_UFunction_UMassExchangeComponent_CheckMassEmpty, "CheckMassEmpty" }, // 2595577388
		{ &Z_Construct_UFunction_UMassExchangeComponent_DestroyFunctions, "DestroyFunctions" }, // 1586521663
		{ &Z_Construct_UFunction_UMassExchangeComponent_RemoveMass, "RemoveMass" }, // 822810876
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassExchangeComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassExchangeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MassExchangeComponent.h" },
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassExchangeComponent_Statics::NewProp_CurrentMassValue_MetaData[] = {
		{ "Category", "Mass Exchange" },
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassExchangeComponent_Statics::NewProp_CurrentMassValue = { "CurrentMassValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassExchangeComponent, CurrentMassValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassExchangeComponent_Statics::NewProp_CurrentMassValue_MetaData), Z_Construct_UClass_UMassExchangeComponent_Statics::NewProp_CurrentMassValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassExchangeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassExchangeComponent_Statics::NewProp_CurrentMassValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassExchangeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassExchangeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassExchangeComponent_Statics::ClassParams = {
		&UMassExchangeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMassExchangeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassExchangeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassExchangeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassExchangeComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassExchangeComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMassExchangeComponent()
	{
		if (!Z_Registration_Info_UClass_UMassExchangeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassExchangeComponent.OuterSingleton, Z_Construct_UClass_UMassExchangeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassExchangeComponent.OuterSingleton;
	}
	template<> THELASTHOPE_API UClass* StaticClass<UMassExchangeComponent>()
	{
		return UMassExchangeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassExchangeComponent);
	UMassExchangeComponent::~UMassExchangeComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchangeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchangeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassExchangeComponent, UMassExchangeComponent::StaticClass, TEXT("UMassExchangeComponent"), &Z_Registration_Info_UClass_UMassExchangeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassExchangeComponent), 561468088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchangeComponent_h_1490398654(TEXT("/Script/TheLastHope"),
		Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchangeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchangeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
