// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_Verschueren/Public/mazePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemazePlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_AmazePlayerController();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_AmazePlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GPE230_Verschueren();
// End Cross Module References
	void AmazePlayerController::StaticRegisterNativesAmazePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AmazePlayerController);
	UClass* Z_Construct_UClass_AmazePlayerController_NoRegister()
	{
		return AmazePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AmazePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AmazePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_Verschueren,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AmazePlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmazePlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "mazePlayerController.h" },
		{ "ModuleRelativePath", "Public/mazePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AmazePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmazePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AmazePlayerController_Statics::ClassParams = {
		&AmazePlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AmazePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AmazePlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AmazePlayerController()
	{
		if (!Z_Registration_Info_UClass_AmazePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AmazePlayerController.OuterSingleton, Z_Construct_UClass_AmazePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AmazePlayerController.OuterSingleton;
	}
	template<> GPE230_VERSCHUEREN_API UClass* StaticClass<AmazePlayerController>()
	{
		return AmazePlayerController::StaticClass();
	}
	AmazePlayerController::AmazePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmazePlayerController);
	AmazePlayerController::~AmazePlayerController() {}
	struct Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_mazePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_mazePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AmazePlayerController, AmazePlayerController::StaticClass, TEXT("AmazePlayerController"), &Z_Registration_Info_UClass_AmazePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AmazePlayerController), 1997190217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_mazePlayerController_h_2409694283(TEXT("/Script/GPE230_Verschueren"),
		Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_mazePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_mazePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
