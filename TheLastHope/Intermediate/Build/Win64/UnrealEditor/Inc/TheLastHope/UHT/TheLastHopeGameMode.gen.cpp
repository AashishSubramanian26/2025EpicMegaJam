// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheLastHope/TheLastHopeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheLastHopeGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	THELASTHOPE_API UClass* Z_Construct_UClass_ATheLastHopeGameMode();
	THELASTHOPE_API UClass* Z_Construct_UClass_ATheLastHopeGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheLastHope();
// End Cross Module References
	void ATheLastHopeGameMode::StaticRegisterNativesATheLastHopeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATheLastHopeGameMode);
	UClass* Z_Construct_UClass_ATheLastHopeGameMode_NoRegister()
	{
		return ATheLastHopeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATheLastHopeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATheLastHopeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TheLastHope,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATheLastHopeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TheLastHopeGameMode.h" },
		{ "ModuleRelativePath", "TheLastHopeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATheLastHopeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATheLastHopeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATheLastHopeGameMode_Statics::ClassParams = {
		&ATheLastHopeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATheLastHopeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATheLastHopeGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATheLastHopeGameMode()
	{
		if (!Z_Registration_Info_UClass_ATheLastHopeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATheLastHopeGameMode.OuterSingleton, Z_Construct_UClass_ATheLastHopeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATheLastHopeGameMode.OuterSingleton;
	}
	template<> THELASTHOPE_API UClass* StaticClass<ATheLastHopeGameMode>()
	{
		return ATheLastHopeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATheLastHopeGameMode);
	ATheLastHopeGameMode::~ATheLastHopeGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_anish_source_repos_2025EpicMegaJam_TheLastHope_Source_TheLastHope_TheLastHopeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_source_repos_2025EpicMegaJam_TheLastHope_Source_TheLastHope_TheLastHopeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATheLastHopeGameMode, ATheLastHopeGameMode::StaticClass, TEXT("ATheLastHopeGameMode"), &Z_Registration_Info_UClass_ATheLastHopeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATheLastHopeGameMode), 2555733859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_source_repos_2025EpicMegaJam_TheLastHope_Source_TheLastHope_TheLastHopeGameMode_h_3866388396(TEXT("/Script/TheLastHope"),
		Z_CompiledInDeferFile_FID_Users_anish_source_repos_2025EpicMegaJam_TheLastHope_Source_TheLastHope_TheLastHopeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_anish_source_repos_2025EpicMegaJam_TheLastHope_Source_TheLastHope_TheLastHopeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
