// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LockAndKey.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef GPE230_VERSCHUEREN_LockAndKey_generated_h
#error "LockAndKey.generated.h already included, missing '#pragma once' in LockAndKey.h"
#endif
#define GPE230_VERSCHUEREN_LockAndKey_generated_h

#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_SPARSE_DATA
#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenTheDoor); \
	DECLARE_FUNCTION(execCheckActorType);


#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_ACCESSORS
#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALockAndKey(); \
	friend struct Z_Construct_UClass_ALockAndKey_Statics; \
public: \
	DECLARE_CLASS(ALockAndKey, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GPE230_Verschueren"), NO_API) \
	DECLARE_SERIALIZER(ALockAndKey)


#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALockAndKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALockAndKey(ALockAndKey&&); \
	NO_API ALockAndKey(const ALockAndKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALockAndKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALockAndKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALockAndKey) \
	NO_API virtual ~ALockAndKey();


#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_12_PROLOG
#define FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_SPARSE_DATA \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_ACCESSORS \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_INCLASS_NO_PURE_DECLS \
	FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GPE230_VERSCHUEREN_API UClass* StaticClass<class ALockAndKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GPE230_Verschueren_Source_GPE230_Verschueren_Public_LockAndKey_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
