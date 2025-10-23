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
	DEFINE_FUNCTION(UMassExchangeComponent::execUpdateActorScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OldMass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateActorScale_Implementation(Z_Param_OldMass,Z_Param_NewMass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassExchangeComponent::execHandleMass)
	{
		P_GET_OBJECT(UMassExchangeComponent,Z_Param_OtherMEComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMass_Implementation(Z_Param_OtherMEComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassExchangeComponent::execHandleMassPlayer)
	{
		P_GET_OBJECT(UMassExchangeComponent,Z_Param_OtherMEComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMassPlayer_Implementation(Z_Param_OtherMEComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMassExchangeComponent::execDestroyFunctions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyFunctions();
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
	struct MassExchangeComponent_eventHandleMass_Parms
	{
		UMassExchangeComponent* OtherMEComponent;
	};
	struct MassExchangeComponent_eventHandleMassPlayer_Parms
	{
		UMassExchangeComponent* OtherMEComponent;
	};
	struct MassExchangeComponent_eventUpdateActorScale_Parms
	{
		float OldMass;
		float NewMass;
	};
	static FName NAME_UMassExchangeComponent_HandleMass = FName(TEXT("HandleMass"));
	void UMassExchangeComponent::HandleMass(UMassExchangeComponent* OtherMEComponent)
	{
		MassExchangeComponent_eventHandleMass_Parms Parms;
		Parms.OtherMEComponent=OtherMEComponent;
		ProcessEvent(FindFunctionChecked(NAME_UMassExchangeComponent_HandleMass),&Parms);
	}
	static FName NAME_UMassExchangeComponent_HandleMassPlayer = FName(TEXT("HandleMassPlayer"));
	void UMassExchangeComponent::HandleMassPlayer(UMassExchangeComponent* OtherMEComponent)
	{
		MassExchangeComponent_eventHandleMassPlayer_Parms Parms;
		Parms.OtherMEComponent=OtherMEComponent;
		ProcessEvent(FindFunctionChecked(NAME_UMassExchangeComponent_HandleMassPlayer),&Parms);
	}
	static FName NAME_UMassExchangeComponent_UpdateActorScale = FName(TEXT("UpdateActorScale"));
	void UMassExchangeComponent::UpdateActorScale(float OldMass, float NewMass)
	{
		MassExchangeComponent_eventUpdateActorScale_Parms Parms;
		Parms.OldMass=OldMass;
		Parms.NewMass=NewMass;
		ProcessEvent(FindFunctionChecked(NAME_UMassExchangeComponent_UpdateActorScale),&Parms);
	}
	void UMassExchangeComponent::StaticRegisterNativesUMassExchangeComponent()
	{
		UClass* Class = UMassExchangeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMass", &UMassExchangeComponent::execAddMass },
			{ "DestroyFunctions", &UMassExchangeComponent::execDestroyFunctions },
			{ "HandleMass", &UMassExchangeComponent::execHandleMass },
			{ "HandleMassPlayer", &UMassExchangeComponent::execHandleMassPlayer },
			{ "UpdateActorScale", &UMassExchangeComponent::execUpdateActorScale },
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adds Mass to the CurrentMassValue\n" },
#endif
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds Mass to the CurrentMassValue" },
#endif
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Does all the things the actor should do when it needs to be destroyed\n" },
#endif
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does all the things the actor should do when it needs to be destroyed" },
#endif
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
	struct Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherMEComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherMEComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::NewProp_OtherMEComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::NewProp_OtherMEComponent = { "OtherMEComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassExchangeComponent_eventHandleMass_Parms, OtherMEComponent), Z_Construct_UClass_UMassExchangeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::NewProp_OtherMEComponent_MetaData), Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::NewProp_OtherMEComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::NewProp_OtherMEComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Exchange" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines how to handle an exchange of mass for a default actor and another actor\n" },
#endif
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines how to handle an exchange of mass for a default actor and another actor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassExchangeComponent, nullptr, "HandleMass", nullptr, nullptr, Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::PropPointers), sizeof(MassExchangeComponent_eventHandleMass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::PropPointers) < 2048);
	static_assert(sizeof(MassExchangeComponent_eventHandleMass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassExchangeComponent_HandleMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassExchangeComponent_HandleMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherMEComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherMEComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::NewProp_OtherMEComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::NewProp_OtherMEComponent = { "OtherMEComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassExchangeComponent_eventHandleMassPlayer_Parms, OtherMEComponent), Z_Construct_UClass_UMassExchangeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::NewProp_OtherMEComponent_MetaData), Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::NewProp_OtherMEComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::NewProp_OtherMEComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Exchange" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Determines how to handle an exchange of mass for a default actor\n" },
#endif
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines how to handle an exchange of mass for a default actor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassExchangeComponent, nullptr, "HandleMassPlayer", nullptr, nullptr, Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::PropPointers), sizeof(MassExchangeComponent_eventHandleMassPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::PropPointers) < 2048);
	static_assert(sizeof(MassExchangeComponent_eventHandleMassPlayer_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OldMass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::NewProp_OldMass = { "OldMass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassExchangeComponent_eventUpdateActorScale_Parms, OldMass), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::NewProp_NewMass = { "NewMass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassExchangeComponent_eventUpdateActorScale_Parms, NewMass), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::NewProp_OldMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::NewProp_NewMass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass Exchange" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the owning actor's scale based on the mass\n" },
#endif
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the owning actor's scale based on the mass" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassExchangeComponent, nullptr, "UpdateActorScale", nullptr, nullptr, Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::PropPointers), sizeof(MassExchangeComponent_eventUpdateActorScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::PropPointers) < 2048);
	static_assert(sizeof(MassExchangeComponent_eventUpdateActorScale_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale_Statics::FuncParams);
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
		{ &Z_Construct_UFunction_UMassExchangeComponent_AddMass, "AddMass" }, // 41072867
		{ &Z_Construct_UFunction_UMassExchangeComponent_DestroyFunctions, "DestroyFunctions" }, // 3276654071
		{ &Z_Construct_UFunction_UMassExchangeComponent_HandleMass, "HandleMass" }, // 3357264283
		{ &Z_Construct_UFunction_UMassExchangeComponent_HandleMassPlayer, "HandleMassPlayer" }, // 1390560242
		{ &Z_Construct_UFunction_UMassExchangeComponent_UpdateActorScale, "UpdateActorScale" }, // 1072672198
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassExchangeComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassExchangeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MassExchangeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassExchangeComponent_Statics::NewProp_CurrentMassValue_MetaData[] = {
		{ "Category", "Mass Exchange" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Current Mass of the Actor\n" },
#endif
		{ "ModuleRelativePath", "MassExchangeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Current Mass of the Actor" },
#endif
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
		0x00B010A4u,
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
		{ Z_Construct_UClass_UMassExchangeComponent, UMassExchangeComponent::StaticClass, TEXT("UMassExchangeComponent"), &Z_Registration_Info_UClass_UMassExchangeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassExchangeComponent), 338173492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchangeComponent_h_3400981929(TEXT("/Script/TheLastHope"),
		Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchangeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_MassExchangeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
