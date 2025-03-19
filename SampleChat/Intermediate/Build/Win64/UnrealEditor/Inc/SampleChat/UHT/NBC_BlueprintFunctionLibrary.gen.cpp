// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/Public/NBC_BlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNBC_BlueprintFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
SAMPLECHAT_API UClass* Z_Construct_UClass_UNBC_BlueprintFunctionLibrary();
SAMPLECHAT_API UClass* Z_Construct_UClass_UNBC_BlueprintFunctionLibrary_NoRegister();
SAMPLECHAT_API UClass* Z_Construct_UClass_UNBC_GameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class UNBC_BlueprintFunctionLibrary Function CheckNumBer
struct Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics
{
	struct NBC_BlueprintFunctionLibrary_eventCheckNumBer_Parms
	{
		UNBC_GameInstance* ContextObject;
		FString Number;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NBC_Project" },
		{ "ModuleRelativePath", "Public/NBC_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Number;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_BlueprintFunctionLibrary_eventCheckNumBer_Parms, ContextObject), Z_Construct_UClass_UNBC_GameInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_BlueprintFunctionLibrary_eventCheckNumBer_Parms, Number), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::NewProp_Number,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNBC_BlueprintFunctionLibrary, nullptr, "CheckNumBer", nullptr, nullptr, Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::NBC_BlueprintFunctionLibrary_eventCheckNumBer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::NBC_BlueprintFunctionLibrary_eventCheckNumBer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNBC_BlueprintFunctionLibrary::execCheckNumBer)
{
	P_GET_OBJECT(UNBC_GameInstance,Z_Param_ContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Number);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNBC_BlueprintFunctionLibrary::CheckNumBer(Z_Param_ContextObject,Z_Param_Number);
	P_NATIVE_END;
}
// End Class UNBC_BlueprintFunctionLibrary Function CheckNumBer

// Begin Class UNBC_BlueprintFunctionLibrary Function GetBaseBallNumber
struct Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics
{
	struct NBC_BlueprintFunctionLibrary_eventGetBaseBallNumber_Parms
	{
		UNBC_GameInstance* Instance;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NBC_Project" },
		{ "ModuleRelativePath", "Public/NBC_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_BlueprintFunctionLibrary_eventGetBaseBallNumber_Parms, Instance), Z_Construct_UClass_UNBC_GameInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_BlueprintFunctionLibrary_eventGetBaseBallNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::NewProp_Instance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNBC_BlueprintFunctionLibrary, nullptr, "GetBaseBallNumber", nullptr, nullptr, Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::NBC_BlueprintFunctionLibrary_eventGetBaseBallNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::NBC_BlueprintFunctionLibrary_eventGetBaseBallNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNBC_BlueprintFunctionLibrary::execGetBaseBallNumber)
{
	P_GET_OBJECT(UNBC_GameInstance,Z_Param_Instance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UNBC_BlueprintFunctionLibrary::GetBaseBallNumber(Z_Param_Instance);
	P_NATIVE_END;
}
// End Class UNBC_BlueprintFunctionLibrary Function GetBaseBallNumber

// Begin Class UNBC_BlueprintFunctionLibrary Function GetGameWolrd
struct Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics
{
	struct NBC_BlueprintFunctionLibrary_eventGetGameWolrd_Parms
	{
		UObject* ContextObject;
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NBC_Project" },
		{ "ModuleRelativePath", "Public/NBC_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_BlueprintFunctionLibrary_eventGetGameWolrd_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_BlueprintFunctionLibrary_eventGetGameWolrd_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNBC_BlueprintFunctionLibrary, nullptr, "GetGameWolrd", nullptr, nullptr, Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::NBC_BlueprintFunctionLibrary_eventGetGameWolrd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::NBC_BlueprintFunctionLibrary_eventGetGameWolrd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNBC_BlueprintFunctionLibrary::execGetGameWolrd)
{
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=UNBC_BlueprintFunctionLibrary::GetGameWolrd(Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class UNBC_BlueprintFunctionLibrary Function GetGameWolrd

// Begin Class UNBC_BlueprintFunctionLibrary Function GetMyFirstCPP
struct Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics
{
	struct NBC_BlueprintFunctionLibrary_eventGetMyFirstCPP_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyTestCPPLib" },
		{ "ModuleRelativePath", "Public/NBC_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_BlueprintFunctionLibrary_eventGetMyFirstCPP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNBC_BlueprintFunctionLibrary, nullptr, "GetMyFirstCPP", nullptr, nullptr, Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics::NBC_BlueprintFunctionLibrary_eventGetMyFirstCPP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics::NBC_BlueprintFunctionLibrary_eventGetMyFirstCPP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNBC_BlueprintFunctionLibrary::execGetMyFirstCPP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UNBC_BlueprintFunctionLibrary::GetMyFirstCPP();
	P_NATIVE_END;
}
// End Class UNBC_BlueprintFunctionLibrary Function GetMyFirstCPP

// Begin Class UNBC_BlueprintFunctionLibrary Function GetTestInt
struct Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics
{
	struct NBC_BlueprintFunctionLibrary_eventGetTestInt_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyTestCPPLib" },
		{ "ModuleRelativePath", "Public/NBC_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_BlueprintFunctionLibrary_eventGetTestInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNBC_BlueprintFunctionLibrary, nullptr, "GetTestInt", nullptr, nullptr, Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics::NBC_BlueprintFunctionLibrary_eventGetTestInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics::NBC_BlueprintFunctionLibrary_eventGetTestInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNBC_BlueprintFunctionLibrary::execGetTestInt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UNBC_BlueprintFunctionLibrary::GetTestInt();
	P_NATIVE_END;
}
// End Class UNBC_BlueprintFunctionLibrary Function GetTestInt

// Begin Class UNBC_BlueprintFunctionLibrary Function StartGame
struct Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics
{
	struct NBC_BlueprintFunctionLibrary_eventStartGame_Parms
	{
		UNBC_GameInstance* ContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NBC_Project" },
		{ "ModuleRelativePath", "Public/NBC_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NBC_BlueprintFunctionLibrary_eventStartGame_Parms, ContextObject), Z_Construct_UClass_UNBC_GameInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics::NewProp_ContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNBC_BlueprintFunctionLibrary, nullptr, "StartGame", nullptr, nullptr, Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics::NBC_BlueprintFunctionLibrary_eventStartGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics::NBC_BlueprintFunctionLibrary_eventStartGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNBC_BlueprintFunctionLibrary::execStartGame)
{
	P_GET_OBJECT(UNBC_GameInstance,Z_Param_ContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNBC_BlueprintFunctionLibrary::StartGame(Z_Param_ContextObject);
	P_NATIVE_END;
}
// End Class UNBC_BlueprintFunctionLibrary Function StartGame

// Begin Class UNBC_BlueprintFunctionLibrary
void UNBC_BlueprintFunctionLibrary::StaticRegisterNativesUNBC_BlueprintFunctionLibrary()
{
	UClass* Class = UNBC_BlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckNumBer", &UNBC_BlueprintFunctionLibrary::execCheckNumBer },
		{ "GetBaseBallNumber", &UNBC_BlueprintFunctionLibrary::execGetBaseBallNumber },
		{ "GetGameWolrd", &UNBC_BlueprintFunctionLibrary::execGetGameWolrd },
		{ "GetMyFirstCPP", &UNBC_BlueprintFunctionLibrary::execGetMyFirstCPP },
		{ "GetTestInt", &UNBC_BlueprintFunctionLibrary::execGetTestInt },
		{ "StartGame", &UNBC_BlueprintFunctionLibrary::execStartGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNBC_BlueprintFunctionLibrary);
UClass* Z_Construct_UClass_UNBC_BlueprintFunctionLibrary_NoRegister()
{
	return UNBC_BlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UNBC_BlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NBC_BlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/NBC_BlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_CheckNumBer, "CheckNumBer" }, // 692754034
		{ &Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetBaseBallNumber, "GetBaseBallNumber" }, // 463327372
		{ &Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetGameWolrd, "GetGameWolrd" }, // 3193605731
		{ &Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetMyFirstCPP, "GetMyFirstCPP" }, // 3392201070
		{ &Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_GetTestInt, "GetTestInt" }, // 429790717
		{ &Z_Construct_UFunction_UNBC_BlueprintFunctionLibrary_StartGame, "StartGame" }, // 1855114446
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNBC_BlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNBC_BlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNBC_BlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNBC_BlueprintFunctionLibrary_Statics::ClassParams = {
	&UNBC_BlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNBC_BlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UNBC_BlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNBC_BlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UNBC_BlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNBC_BlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNBC_BlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNBC_BlueprintFunctionLibrary.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UNBC_BlueprintFunctionLibrary>()
{
	return UNBC_BlueprintFunctionLibrary::StaticClass();
}
UNBC_BlueprintFunctionLibrary::UNBC_BlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNBC_BlueprintFunctionLibrary);
UNBC_BlueprintFunctionLibrary::~UNBC_BlueprintFunctionLibrary() {}
// End Class UNBC_BlueprintFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNBC_BlueprintFunctionLibrary, UNBC_BlueprintFunctionLibrary::StaticClass, TEXT("UNBC_BlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UNBC_BlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNBC_BlueprintFunctionLibrary), 3589765173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h_99221848(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_qordl_Documents_Unreal_Projects_SampleChat_Source_SampleChat_Public_NBC_BlueprintFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
