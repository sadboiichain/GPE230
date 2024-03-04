// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_Verschueren/Public/NPCEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCEnemy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_ANPCEnemy();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_ANPCEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GPE230_Verschueren();
// End Cross Module References
	DEFINE_FUNCTION(ANPCEnemy::execDetectHit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetectHit();
		P_NATIVE_END;
	}
	void ANPCEnemy::StaticRegisterNativesANPCEnemy()
	{
		UClass* Class = ANPCEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DetectHit", &ANPCEnemy::execDetectHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPCEnemy_DetectHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCEnemy_DetectHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//connecting animation to damage\n" },
#endif
		{ "ModuleRelativePath", "Public/NPCEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "connecting animation to damage" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCEnemy_DetectHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCEnemy, nullptr, "DetectHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCEnemy_DetectHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANPCEnemy_DetectHit_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ANPCEnemy_DetectHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCEnemy_DetectHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCEnemy);
	UClass* Z_Construct_UClass_ANPCEnemy_NoRegister()
	{
		return ANPCEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ANPCEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__TraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__TraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__PunchingHandSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp__PunchingHandSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__HitDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__HitDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_Verschueren,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCEnemy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPCEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCEnemy_DetectHit, "DetectHit" }, // 3154821775
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCEnemy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPCEnemy.h" },
		{ "ModuleRelativePath", "Public/NPCEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCEnemy_Statics::NewProp__TraceRadius_MetaData[] = {
		{ "Category", "NPCEnemy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//sphere trace to get hit info\n" },
#endif
		{ "ModuleRelativePath", "Public/NPCEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "sphere trace to get hit info" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCEnemy_Statics::NewProp__TraceRadius = { "_TraceRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCEnemy, _TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCEnemy_Statics::NewProp__TraceRadius_MetaData), Z_Construct_UClass_ANPCEnemy_Statics::NewProp__TraceRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCEnemy_Statics::NewProp__PunchingHandSocketName_MetaData[] = {
		{ "Category", "NPCEnemy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//name of npc fist\n" },
#endif
		{ "ModuleRelativePath", "Public/NPCEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "name of npc fist" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ANPCEnemy_Statics::NewProp__PunchingHandSocketName = { "_PunchingHandSocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCEnemy, _PunchingHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCEnemy_Statics::NewProp__PunchingHandSocketName_MetaData), Z_Construct_UClass_ANPCEnemy_Statics::NewProp__PunchingHandSocketName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCEnemy_Statics::NewProp__HitDamage_MetaData[] = {
		{ "Category", "NPCEnemy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//dmg per punch\n" },
#endif
		{ "ModuleRelativePath", "Public/NPCEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "dmg per punch" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCEnemy_Statics::NewProp__HitDamage = { "_HitDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPCEnemy, _HitDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCEnemy_Statics::NewProp__HitDamage_MetaData), Z_Construct_UClass_ANPCEnemy_Statics::NewProp__HitDamage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCEnemy_Statics::NewProp__TraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCEnemy_Statics::NewProp__PunchingHandSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCEnemy_Statics::NewProp__HitDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCEnemy_Statics::ClassParams = {
		&ANPCEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPCEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPCEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPCEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPCEnemy_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANPCEnemy()
	{
		if (!Z_Registration_Info_UClass_ANPCEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCEnemy.OuterSingleton, Z_Construct_UClass_ANPCEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPCEnemy.OuterSingleton;
	}
	template<> GPE230_VERSCHUEREN_API UClass* StaticClass<ANPCEnemy>()
	{
		return ANPCEnemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCEnemy);
	ANPCEnemy::~ANPCEnemy() {}
	struct Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_NPCEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_NPCEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPCEnemy, ANPCEnemy::StaticClass, TEXT("ANPCEnemy"), &Z_Registration_Info_UClass_ANPCEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCEnemy), 2016981441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_NPCEnemy_h_3034368054(TEXT("/Script/GPE230_Verschueren"),
		Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_NPCEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_NPCEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
