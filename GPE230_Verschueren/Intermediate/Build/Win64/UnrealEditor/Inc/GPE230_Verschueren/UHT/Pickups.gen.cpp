// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GPE230_Verschueren/Public/Pickups.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickups() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_AMazeCharacter_NoRegister();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_APickups();
	GPE230_VERSCHUEREN_API UClass* Z_Construct_UClass_APickups_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GPE230_Verschueren();
// End Cross Module References
	DEFINE_FUNCTION(APickups::execdestroySelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->destroySelf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickups::execApply)
	{
		P_GET_OBJECT(AMazeCharacter,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Apply(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickups::execCheckActorType)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckActorType(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void APickups::StaticRegisterNativesAPickups()
	{
		UClass* Class = APickups::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Apply", &APickups::execApply },
			{ "CheckActorType", &APickups::execCheckActorType },
			{ "destroySelf", &APickups::execdestroySelf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickups_Apply_Statics
	{
		struct Pickups_eventApply_Parms
		{
			AMazeCharacter* player;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickups_Apply_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pickups_eventApply_Parms, player), Z_Construct_UClass_AMazeCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickups_Apply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickups_Apply_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickups_Apply_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//complete actions\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickups.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "complete actions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickups_Apply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickups, nullptr, "Apply", nullptr, nullptr, Z_Construct_UFunction_APickups_Apply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickups_Apply_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickups_Apply_Statics::Pickups_eventApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickups_Apply_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickups_Apply_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickups_Apply_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickups_Apply_Statics::Pickups_eventApply_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickups_Apply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickups_Apply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickups_CheckActorType_Statics
	{
		struct Pickups_eventCheckActorType_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickups_CheckActorType_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pickups_eventCheckActorType_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickups_CheckActorType_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Pickups_eventCheckActorType_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickups_CheckActorType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickups_CheckActorType_Statics::NewProp_OverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickups_CheckActorType_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickups_CheckActorType_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//create ufunction check actor type to check if other actor is player chr\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickups.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "create ufunction check actor type to check if other actor is player chr" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickups_CheckActorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickups, nullptr, "CheckActorType", nullptr, nullptr, Z_Construct_UFunction_APickups_CheckActorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickups_CheckActorType_Statics::PropPointers), sizeof(Z_Construct_UFunction_APickups_CheckActorType_Statics::Pickups_eventCheckActorType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickups_CheckActorType_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickups_CheckActorType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APickups_CheckActorType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_APickups_CheckActorType_Statics::Pickups_eventCheckActorType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_APickups_CheckActorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickups_CheckActorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickups_destroySelf_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickups_destroySelf_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//destroy item\n" },
#endif
		{ "ModuleRelativePath", "Public/Pickups.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "destroy item" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APickups_destroySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickups, nullptr, "destroySelf", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APickups_destroySelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_APickups_destroySelf_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APickups_destroySelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APickups_destroySelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickups);
	UClass* Z_Construct_UClass_APickups_NoRegister()
	{
		return APickups::StaticClass();
	}
	struct Z_Construct_UClass_APickups_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickups_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_GPE230_Verschueren,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickups_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APickups_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickups_Apply, "Apply" }, // 2249634408
		{ &Z_Construct_UFunction_APickups_CheckActorType, "CheckActorType" }, // 3786230125
		{ &Z_Construct_UFunction_APickups_destroySelf, "destroySelf" }, // 4138065801
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APickups_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickups_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Pickups.h" },
		{ "ModuleRelativePath", "Public/Pickups.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickups_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickups>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickups_Statics::ClassParams = {
		&APickups::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APickups_Statics::Class_MetaDataParams), Z_Construct_UClass_APickups_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APickups()
	{
		if (!Z_Registration_Info_UClass_APickups.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickups.OuterSingleton, Z_Construct_UClass_APickups_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickups.OuterSingleton;
	}
	template<> GPE230_VERSCHUEREN_API UClass* StaticClass<APickups>()
	{
		return APickups::StaticClass();
	}
	APickups::APickups(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickups);
	APickups::~APickups() {}
	struct Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickups, APickups::StaticClass, TEXT("APickups"), &Z_Registration_Info_UClass_APickups, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickups), 2517863717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_2840914129(TEXT("/Script/GPE230_Verschueren"),
		Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
