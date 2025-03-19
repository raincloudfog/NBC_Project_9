// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "NBC_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API UNBC_GameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:
	//Replicated 서버에서 수정시 , 클라이언트에서 동기화 되는 변수
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Server")
	TArray<int32> BaseBallNumber;

public:
	void SetserverValue();

	bool CheckNum(const TArray<int32>& Number);
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	FString GetBaseBallNumber();
};
