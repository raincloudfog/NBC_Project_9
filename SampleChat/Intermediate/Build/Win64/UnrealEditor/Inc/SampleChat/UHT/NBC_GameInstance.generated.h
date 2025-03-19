// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NBC_GameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_NBC_GameInstance_generated_h
#error "NBC_GameInstance.generated.h already included, missing '#pragma once' in NBC_GameInstance.h"
#endif
#define SAMPLECHAT_NBC_GameInstance_generated_h

#define FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_GameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNBC_GameInstance(); \
	friend struct Z_Construct_UClass_UNBC_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UNBC_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(UNBC_GameInstance) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BaseBallNumber=NETFIELD_REP_START, \
		NETFIELD_REP_END=BaseBallNumber	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UNBC_GameInstance) \
public:


#define FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_GameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNBC_GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNBC_GameInstance(UNBC_GameInstance&&); \
	UNBC_GameInstance(const UNBC_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNBC_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNBC_GameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNBC_GameInstance) \
	NO_API virtual ~UNBC_GameInstance();


#define FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_GameInstance_h_12_PROLOG
#define FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_GameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_GameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_GameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class UNBC_GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
