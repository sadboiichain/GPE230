// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_Verschueren/Public/LockAndKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockAndKey() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_ALockAndKey();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_ALockAndKey_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GPE230_Verschueren();
// End Cross Module References
	DEFINE_FUNCTION(ALockAndKey::execOpenTheDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenTheDoor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALockAndKey::execCheckActorType)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckActorType(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void ALockAndKey::StaticRegisterNativesALockAndKey()
	{
		UClass* Class = ALockAndKey::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckActorType", &ALockAndKey::execCheckActorType },
			{ "OpenTheDoor", &ALockAndKey::execOpenTheDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics
	{
		struct LockAndKey_eventCheckActorType_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockAndKey_eventCheckActorType_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LockAndKey_eventCheckActorType_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::NewProp_OverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//create ufunction check actor type to check if other actor is player chr\n" },
#endif
		{ "ModuleRelativePath", "Public/LockAndKey.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "create ufunction check actor type to check if other actor is player chr" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALockAndKey, nullptr, "CheckActorType", nullptr, nullptr, Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::LockAndKey_eventCheckActorType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::LockAndKey_eventCheckActorType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALockAndKey_CheckActorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALockAndKey_CheckActorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALockAndKey_OpenTheDoor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALockAndKey_OpenTheDoor_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//destroy \n" },
#endif
		{ "ModuleRelativePath", "Public/LockAndKey.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "destroy" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALockAndKey_OpenTheDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALockAndKey, nullptr, "OpenTheDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALockAndKey_OpenTheDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALockAndKey_OpenTheDoor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALockAndKey_OpenTheDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALockAndKey_OpenTheDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALockAndKey);
	UClass* Z_Construct_UClass_ALockAndKey_NoRegister()
	{
		return ALockAndKey::StaticClass();
	}
	struct Z_Construct_UClass_ALockAndKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALockAndKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_Verschueren,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALockAndKey_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALockAndKey_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALockAndKey_CheckActorType, "CheckActorType" }, // 3211213287
		{ &Z_Construct_UFunction_ALockAndKey_OpenTheDoor, "OpenTheDoor" }, // 2469012312
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALockAndKey_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALockAndKey_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LockAndKey.h" },
		{ "ModuleRelativePath", "Public/LockAndKey.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALockAndKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALockAndKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALockAndKey_Statics::ClassParams = {
		&ALockAndKey::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALockAndKey_Statics::Class_MetaDataParams), Z_Construct_UClass_ALockAndKey_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ALockAndKey()
	{
		if (!Z_Registration_Info_UClass_ALockAndKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALockAndKey.OuterSingleton, Z_Construct_UClass_ALockAndKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALockAndKey.OuterSingleton;
	}
	template<> GPE230_VERSCHUEREN_API UClass* StaticClass<ALockAndKey>()
	{
		return ALockAndKey::StaticClass();
	}
	ALockAndKey::ALockAndKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALockAndKey);
	ALockAndKey::~ALockAndKey() {}
	struct Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALockAndKey, ALockAndKey::StaticClass, TEXT("ALockAndKey"), &Z_Registration_Info_UClass_ALockAndKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALockAndKey), 2934964140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_4263256188(TEXT("/Script/GPE230_Verschueren"),
		Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
