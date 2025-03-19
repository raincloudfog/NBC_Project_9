// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "NBC_GameMode.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API ANBC_GameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	ANBC_GameMode();

	virtual void StartPlay() override;


	// 번호 체크 
	void CheckNumber(int32 Num);

	int CheckBaseBall(int32 Num , int32 index);

private:
	TArray<int> Number; // 

};
