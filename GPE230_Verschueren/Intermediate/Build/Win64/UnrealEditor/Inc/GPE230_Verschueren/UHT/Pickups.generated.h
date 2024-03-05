// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickups.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AMazeCharacter;
#ifdef GPE230_VERSCHUEREN_Pickups_generated_h
#error "Pickups.generated.h already included, missing '#pragma once' in Pickups.h"
#endif
#define GPE230_VERSCHUEREN_Pickups_generated_h

#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_SPARSE_DATA
#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execdestroySelf); \
	DECLARE_FUNCTION(execApply); \
	DECLARE_FUNCTION(execCheckActorType);


#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_ACCESSORS
#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickups(); \
	friend struct Z_Construct_UClass_APickups_Statics; \
public: \
	DECLARE_CLASS(APickups, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GPE230_Verschueren"), NO_API) \
	DECLARE_SERIALIZER(APickups)


#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickups(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickups(APickups&&); \
	NO_API APickups(const APickups&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickups); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickups); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickups) \
	NO_API virtual ~APickups();


#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_12_PROLOG
#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_SPARSE_DATA \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_ACCESSORS \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_INCLASS_NO_PURE_DECLS \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GPE230_VERSCHUEREN_API UClass* StaticClass<class APickups>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_Pickups_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
