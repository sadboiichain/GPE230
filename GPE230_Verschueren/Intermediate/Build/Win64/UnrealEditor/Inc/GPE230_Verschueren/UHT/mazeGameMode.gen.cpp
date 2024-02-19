// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_Verschueren/Public/mazeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemazeGameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_AMazeCharacter_NoRegister();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_AmazeGameMode();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_AmazeGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GPE230_Verschueren();
// End Cross Module References
	void AmazeGameMode::StaticRegisterNativesAmazeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AmazeGameMode);
	UClass* Z_Construct_UClass_AmazeGameMode_NoRegister()
	{
		return AmazeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AmazeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultPlayerCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AmazeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_Verschueren,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmazeGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmazeGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "mazeGameMode.h" },
		{ "ModuleRelativePath", "Public/mazeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmazeGameMode_Statics::NewProp_DefaultPlayerCharacter_MetaData[] = {
		{ "Category", "mazeGameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//set up the default pawn to the a maze character\n" },
#endif
		{ "ModuleRelativePath", "Public/mazeGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "set up the default pawn to the a maze character" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AmazeGameMode_Statics::NewProp_DefaultPlayerCharacter = { "DefaultPlayerCharacter", nullptr, (EPropertyFlags)0x0044000002000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AmazeGameMode, DefaultPlayerCharacter), Z_Construct_UClass_UClass, Z_Construct_UClass_AMazeCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmazeGameMode_Statics::NewProp_DefaultPlayerCharacter_MetaData), Z_Construct_UClass_AmazeGameMode_Statics::NewProp_DefaultPlayerCharacter_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AmazeGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AmazeGameMode_Statics::NewProp_DefaultPlayerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AmazeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmazeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AmazeGameMode_Statics::ClassParams = {
		&AmazeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AmazeGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AmazeGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmazeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AmazeGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmazeGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AmazeGameMode()
	{
		if (!Z_Registration_Info_UClass_AmazeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AmazeGameMode.OuterSingleton, Z_Construct_UClass_AmazeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AmazeGameMode.OuterSingleton;
	}
	template<> GPE230_VERSCHUEREN_API UClass* StaticClass<AmazeGameMode>()
	{
		return AmazeGameMode::StaticClass();
	}
	AmazeGameMode::AmazeGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmazeGameMode);
	AmazeGameMode::~AmazeGameMode() {}
	struct Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_mazeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_mazeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AmazeGameMode, AmazeGameMode::StaticClass, TEXT("AmazeGameMode"), &Z_Registration_Info_UClass_AmazeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AmazeGameMode), 2997738063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_mazeGameMode_h_1801423883(TEXT("/Script/GPE230_Verschueren"),
		Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_mazeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_mazeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
