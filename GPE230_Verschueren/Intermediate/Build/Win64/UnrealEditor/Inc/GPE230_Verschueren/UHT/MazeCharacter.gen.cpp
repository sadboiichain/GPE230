// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_Verschueren/Public/MazeCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_AMazeCharacter();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_AMazeCharacter_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GPE230_Verschueren();
// End Cross Module References
	DEFINE_FUNCTION(AMazeCharacter::execActivateStunParticleSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateStunParticleSystem();
		P_NATIVE_END;
	}
	void AMazeCharacter::StaticRegisterNativesAMazeCharacter()
	{
		UClass* Class = AMazeCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateStunParticleSystem", &AMazeCharacter::execActivateStunParticleSystem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//start the particle effects\n" },
#endif
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "start the particle effects" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMazeCharacter, nullptr, "ActivateStunParticleSystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMazeCharacter);
	UClass* Z_Construct_UClass_AMazeCharacter_NoRegister()
	{
		return AMazeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMazeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__deathAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__deathAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__stunSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__stunSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_Verschueren,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMazeCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMazeCharacter_ActivateStunParticleSystem, "ActivateStunParticleSystem" }, // 2613602357
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MazeCharacter.h" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "MazeCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//maximum and starting health for this character\n" },
#endif
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "maximum and starting health for this character" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp_maxHealth_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp_maxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "MazeCharacter" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, moveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp_moveSpeed_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp_moveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp_rotationSpeed_MetaData[] = {
		{ "Category", "MazeCharacter" },
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp_rotationSpeed = { "rotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, rotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp_rotationSpeed_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp_rotationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp__deathAnim_MetaData[] = {
		{ "Category", "MazeCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ANIM TO PLAY WHEN CHARACTER DIES\n" },
#endif
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ANIM TO PLAY WHEN CHARACTER DIES" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp__deathAnim = { "_deathAnim", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, _deathAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp__deathAnim_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp__deathAnim_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeCharacter_Statics::NewProp__stunSystem_MetaData[] = {
		{ "Category", "MazeCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//particle effects system\n" },
#endif
		{ "ModuleRelativePath", "Public/MazeCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "particle effects system" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeCharacter_Statics::NewProp__stunSystem = { "_stunSystem", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMazeCharacter, _stunSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::NewProp__stunSystem_MetaData), Z_Construct_UClass_AMazeCharacter_Statics::NewProp__stunSystem_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp_maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp_moveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp_rotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp__deathAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeCharacter_Statics::NewProp__stunSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMazeCharacter_Statics::ClassParams = {
		&AMazeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMazeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMazeCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMazeCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMazeCharacter()
	{
		if (!Z_Registration_Info_UClass_AMazeCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMazeCharacter.OuterSingleton, Z_Construct_UClass_AMazeCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMazeCharacter.OuterSingleton;
	}
	template<> GPE230_VERSCHUEREN_API UClass* StaticClass<AMazeCharacter>()
	{
		return AMazeCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeCharacter);
	AMazeCharacter::~AMazeCharacter() {}
	struct Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_MazeCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_MazeCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMazeCharacter, AMazeCharacter::StaticClass, TEXT("AMazeCharacter"), &Z_Registration_Info_UClass_AMazeCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMazeCharacter), 3096954542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_MazeCharacter_h_2559169603(TEXT("/Script/GPE230_Verschueren"),
		Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_MazeCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_MazeCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
