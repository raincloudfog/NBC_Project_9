// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBC_BlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNBC_GameInstance;
class UObject;
class UWorld;
#ifdef SAMPLECHAT_NBC_BlueprintFunctionLibrary_generated_h
#error "NBC_BlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in NBC_BlueprintFunctionLibrary.h"
#endif
#define SAMPLECHAT_NBC_BlueprintFunctionLibrary_generated_h

#define FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBaseBallNumber); \
	DECLARE_FUNCTION(execGetGameWolrd); \
	DECLARE_FUNCTION(execCheckNumBer); \
	DECLARE_FUNCTION(execStartGame); \
	DECLARE_FUNCTION(execGetTestInt); \
	DECLARE_FUNCTION(execGetMyFirstCPP);


#define FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNBC_BlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNBC_BlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNBC_BlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(UNBC_BlueprintFunctionLibrary)


#define FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNBC_BlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNBC_BlueprintFunctionLibrary(UNBC_BlueprintFunctionLibrary&&); \
	UNBC_BlueprintFunctionLibrary(const UNBC_BlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNBC_BlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNBC_BlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNBC_BlueprintFunctionLibrary) \
	NO_API virtual ~UNBC_BlueprintFunctionLibrary();


#define FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h_14_PROLOG
#define FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class UNBC_BlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
