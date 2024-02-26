// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_Verschueren/GPE230_VerschuerenGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPE230_VerschuerenGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_AGPE230_VerschuerenGameMode();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_AGPE230_VerschuerenGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GPE230_Verschueren();
// End Cross Module References
	void AGPE230_VerschuerenGameMode::StaticRegisterNativesAGPE230_VerschuerenGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGPE230_VerschuerenGameMode);
	UClass* Z_Construct_UClass_AGPE230_VerschuerenGameMode_NoRegister()
	{
		return AGPE230_VerschuerenGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGPE230_VerschuerenGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGPE230_VerschuerenGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_Verschueren,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGPE230_VerschuerenGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGPE230_VerschuerenGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GPE230_VerschuerenGameMode.h" },
		{ "ModuleRelativePath", "GPE230_VerschuerenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGPE230_VerschuerenGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGPE230_VerschuerenGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGPE230_VerschuerenGameMode_Statics::ClassParams = {
		&AGPE230_VerschuerenGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGPE230_VerschuerenGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGPE230_VerschuerenGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGPE230_VerschuerenGameMode()
	{
		if (!Z_Registration_Info_UClass_AGPE230_VerschuerenGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGPE230_VerschuerenGameMode.OuterSingleton, Z_Construct_UClass_AGPE230_VerschuerenGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGPE230_VerschuerenGameMode.OuterSingleton;
	}
	template<> GPE230_VERSCHUEREN_API UClass* StaticClass<AGPE230_VerschuerenGameMode>()
	{
		return AGPE230_VerschuerenGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGPE230_VerschuerenGameMode);
	AGPE230_VerschuerenGameMode::~AGPE230_VerschuerenGameMode() {}
	struct Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_GPE230_VerschuerenGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_GPE230_VerschuerenGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGPE230_VerschuerenGameMode, AGPE230_VerschuerenGameMode::StaticClass, TEXT("AGPE230_VerschuerenGameMode"), &Z_Registration_Info_UClass_AGPE230_VerschuerenGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGPE230_VerschuerenGameMode), 3836451720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_GPE230_VerschuerenGameMode_h_3596020916(TEXT("/Script/GPE230_Verschueren"),
		Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_GPE230_VerschuerenGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_GPE230_VerschuerenGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
