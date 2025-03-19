// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_GameInstance.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/KismetSystemLibrary.h"

void UNBC_GameInstance::SetserverValue()
{
	BaseBallNumber.Reset();
	
	TArray<int32> Number;

	for (int32 i = 1; i < 10; i++)
	{
		Number.Add(i);
	}

	for (int32 i = 0; i < 3; i++)
	{
		int32 RemoveNum = FMath::RandRange(0, Number.Num() - 1);

		if (Number.IsValidIndex(RemoveNum))
		{
			BaseBallNumber.Add(Number[RemoveNum]);
			Number.RemoveAt(RemoveNum);
		}
	}
}

bool UNBC_GameInstance::CheckNum(const TArray<int32>& Number)
{
	int32 Ball = 0;
	int32 Strike = 0;

	for (int32 i = 0; i < 3; i++)
	{
		if (BaseBallNumber.Contains(Number[i]))
		{
			if (BaseBallNumber[i] == Number[i])
				Strike++;
			else
				Ball++;
			
		}
	}

	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, FString::Printf(TEXT("%dS %dB"), Strike, Ball));

	UE_LOG(LogTemp, Log, TEXT("%dS %dB"), Strike, Ball);


	return Strike == 3;
}

void UNBC_GameInstance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UNBC_GameInstance, BaseBallNumber); // 레플리 케이션 변수 등록
}

//현재 베이스볼 숫자 전달
FString UNBC_GameInstance::GetBaseBallNumber()
{
	FString NumberText = TEXT("");
	for (int32 i = 0; i < BaseBallNumber.Num(); i++)
	{
		NumberText += TEXT("%d"), BaseBallNumber[i];
	}
	return NumberText;
}
