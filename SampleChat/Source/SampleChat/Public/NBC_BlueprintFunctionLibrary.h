// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NBC_BlueprintFunctionLibrary.generated.h"

class UNBC_GameInstance;

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API UNBC_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

public:
	UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
	static FString GetMyFirstCPP();

	UFUNCTION(BlueprintPure, Category = "MyTestCPPLib")
	static int32 GetTestInt();

	UFUNCTION(BlueprintCallable, Category = "NBC_Project")
	static void StartGame(UNBC_GameInstance* ContextObject);

	UFUNCTION(BlueprintCallable, Category = "NBC_Project")
	static void CheckNumBer(UNBC_GameInstance* ContextObject, FString Number);

	UFUNCTION(BlueprintPure, Category = "NBC_Project")
	static UWorld* GetGameWolrd(UObject* ContextObject);

	UFUNCTION(BlueprintPure, Category = "NBC_Project")
	static FString GetBaseBallNumber(UNBC_GameInstance* Instance);
private:

};
