// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheLastHope/Public/AttachStar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttachStar() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	THELASTHOPE_API UClass* Z_Construct_UClass_AAttachStar();
	THELASTHOPE_API UClass* Z_Construct_UClass_AAttachStar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheLastHope();
// End Cross Module References
	void AAttachStar::StaticRegisterNativesAAttachStar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAttachStar);
	UClass* Z_Construct_UClass_AAttachStar_NoRegister()
	{
		return AAttachStar::StaticClass();
	}
	struct Z_Construct_UClass_AAttachStar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAttachStar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TheLastHope,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachStar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAttachStar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AttachStar.h" },
		{ "ModuleRelativePath", "Public/AttachStar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAttachStar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAttachStar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAttachStar_Statics::ClassParams = {
		&AAttachStar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAttachStar_Statics::Class_MetaDataParams), Z_Construct_UClass_AAttachStar_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAttachStar()
	{
		if (!Z_Registration_Info_UClass_AAttachStar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAttachStar.OuterSingleton, Z_Construct_UClass_AAttachStar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAttachStar.OuterSingleton;
	}
	template<> THELASTHOPE_API UClass* StaticClass<AAttachStar>()
	{
		return AAttachStar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAttachStar);
	AAttachStar::~AAttachStar() {}
	struct Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_Public_AttachStar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_Public_AttachStar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAttachStar, AAttachStar::StaticClass, TEXT("AAttachStar"), &Z_Registration_Info_UClass_AAttachStar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAttachStar), 1687268902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_Public_AttachStar_h_2033321691(TEXT("/Script/TheLastHope"),
		Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_Public_AttachStar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_anish_Documents_GitHub_2025EpicMegaJam_TheLastHope_Source_TheLastHope_Public_AttachStar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
