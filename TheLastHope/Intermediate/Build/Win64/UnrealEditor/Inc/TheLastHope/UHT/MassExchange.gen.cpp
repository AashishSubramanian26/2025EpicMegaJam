// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheLastHope/MassExchange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassExchange() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	THELASTHOPE_API UClass* Z_Construct_UClass_UMassExchange();
	THELASTHOPE_API UClass* Z_Construct_UClass_UMassExchange_NoRegister();
	THELASTHOPE_API UClass* Z_Construct_UClass_UMassExchangeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheLastHope();
// End Cross Module References
	DEFINE_FUNCTION(IMassExchange::execCompareMass)
	{
		P_GET_OBJECT(UMassExchangeComponent,Z_Param_OtherComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompareMass_Implementation(Z_Param_OtherComponent);
		P_NATIVE_END;
	}
	struct MassExchange_eventCompareMass_Parms
	{
		UMassExchangeComponent* OtherComponent;
	};
	void IMassExchange::CompareMass(UMassExchangeComponent* OtherComponent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CompareMass instead.");
	}
	void UMassExchange::StaticRegisterNativesUMassExchange()
	{
		UClass* Class = UMassExchange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompareMass", &IMassExchange::execCompareMass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMassExchange_CompareMass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassExchange_CompareMass_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMassExchange_CompareMass_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassExchange_eventCompareMass_Parms, OtherComponent), Z_Construct_UClass_UMassExchangeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchange_CompareMass_Statics::NewProp_OtherComponent_MetaData), Z_Construct_UFunction_UMassExchange_CompareMass_Statics::NewProp_OtherComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassExchange_CompareMass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassExchange_CompareMass_Statics::NewProp_OtherComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassExchange_CompareMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Exchange" },
		{ "ModuleRelativePath", "MassExchange.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassExchange_CompareMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassExchange, nullptr, "CompareMass", nullptr, nullptr, Z_Construct_UFunction_UMassExchange_CompareMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchange_CompareMass_Statics::PropPointers), sizeof(MassExchange_eventCompareMass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchange_CompareMass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassExchange_CompareMass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchange_CompareMass_Statics::PropPointers) < 2048);
	static_assert(sizeof(MassExchange_eventCompareMass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassExchange_CompareMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassExchange_CompareMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassExchange);
	UClass* Z_Construct_UClass_UMassExchange_NoRegister()
	{
		return UMassExchange::StaticClass();
	}
	struct Z_Construct_UClass_UMassExchange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassExchange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TheLastHope,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassExchange_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassExchange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassExchange_CompareMass, "CompareMass" }, // 3039556926
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassExchange_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassExchange_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MassExchange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassExchange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMassExchange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassExchange_Statics::ClassParams = {
		&UMassExchange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassExchange_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassExchange_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMassExchange()
	{
		if (!Z_Registration_Info_UClass_UMassExchange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassExchange.OuterSingleton, Z_Construct_UClass_UMassExchange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassExchange.OuterSingleton;
	}
	template<> THELASTHOPE_API UClass* StaticClass<UMassExchange>()
	{
		return UMassExchange::StaticClass();
	}
	UMassExchange::UMassExchange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassExchange);
	UMassExchange::~UMassExchange() {}
	static FName NAME_UMassExchange_CompareMass = FName(TEXT("CompareMass"));
	void IMassExchange::Execute_CompareMass(UObject* O, UMassExchangeComponent* OtherComponent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMassExchange::StaticClass()));
		MassExchange_eventCompareMass_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMassExchange_CompareMass);
		if (Func)
		{
			Parms.OtherComponent=OtherComponent;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMassExchange*)(O->GetNativeInterfaceAddress(UMassExchange::StaticClass())))
		{
			I->CompareMass_Implementation(OtherComponent);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassExchange, UMassExchange::StaticClass, TEXT("UMassExchange"), &Z_Registration_Info_UClass_UMassExchange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassExchange), 610902376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchange_h_3287191946(TEXT("/Script/TheLastHope"),
		Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
