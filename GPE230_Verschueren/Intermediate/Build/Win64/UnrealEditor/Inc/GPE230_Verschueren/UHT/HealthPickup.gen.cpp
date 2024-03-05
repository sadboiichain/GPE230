// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_Verschueren/Public/HealthPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthPickup() {}
// Cross Module References
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_AHealthPickup();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_AHealthPickup_NoRegister();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_APickups();
	UPackage* Z_Construct_UPackage__Script_GPE230_Verschueren();
// End Cross Module References
	void AHealthPickup::StaticRegisterNativesAHealthPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealthPickup);
	UClass* Z_Construct_UClass_AHealthPickup_NoRegister()
	{
		return AHealthPickup::StaticClass();
	}
	struct Z_Construct_UClass_AHealthPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickups,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_Verschueren,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "HealthPickup.h" },
		{ "ModuleRelativePath", "Public/HealthPickup.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount_MetaData[] = {
		{ "Category", "HealthPickup" },
		{ "ModuleRelativePath", "Public/HealthPickup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealthPickup, HealAmount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount_MetaData), Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealthPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealthPickup_Statics::NewProp_HealAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthPickup_Statics::ClassParams = {
		&AHealthPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHealthPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealthPickup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthPickup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHealthPickup()
	{
		if (!Z_Registration_Info_UClass_AHealthPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthPickup.OuterSingleton, Z_Construct_UClass_AHealthPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHealthPickup.OuterSingleton;
	}
	template<> GPE230_VERSCHUEREN_API UClass* StaticClass<AHealthPickup>()
	{
		return AHealthPickup::StaticClass();
	}
	AHealthPickup::AHealthPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthPickup);
	AHealthPickup::~AHealthPickup() {}
	struct Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_HealthPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_HealthPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHealthPickup, AHealthPickup::StaticClass, TEXT("AHealthPickup"), &Z_Registration_Info_UClass_AHealthPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthPickup), 22648642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_HealthPickup_h_3087558392(TEXT("/Script/GPE230_Verschueren"),
		Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_HealthPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_HealthPickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
