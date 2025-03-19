// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_BlueprintFunctionLibrary.h"
#include "NBC_GameInstance.h"

FString UNBC_BlueprintFunctionLibrary::GetMyFirstCPP()
{
	return FString(TEXT("Hello CPP lib in BP"));
}

int32 UNBC_BlueprintFunctionLibrary::GetTestInt()
{
	return 0;
}

void UNBC_BlueprintFunctionLibrary::StartGame(UNBC_GameInstance* ContextObject)
{
	////월드 엔진 찾아오기 self로 연결시 현재월드 찾기 가능
	//UWorld* World =
	//GEngine->GetWorldFromContextObject(ContextObject, EGetWorldErrorMode::LogAndReturnNull);

	////게임 인스턴스 접근
	//UNBC_GameInstance* GameInstance = Cast<UNBC_GameInstance>( World->GetGameInstance());

	////볼 넘버 초기화
	//GameInstance->SetserverValue();

	ContextObject->SetserverValue();

}


void UNBC_BlueprintFunctionLibrary::CheckNumBer(UNBC_GameInstance* ContextObject,FString Number)
{
	if (Number.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("Number is Empty")); // 
		return;
	}

	if (Number[0] != TEXT('/'))
	{
		UE_LOG(LogTemp, Warning, TEXT("Number not starts with '/' "));
		return;
	}

	if (Number.Len() > 4)
	{
		UE_LOG(LogTemp, Warning, TEXT("Number Length over '4' "));
		return;
	}

	//UWorld* World = GetGameWolrd(ContextObject);

	/*if (!World)
	{
		return;
	}*/

	//게임 인스턴스 접근
	//UNBC_GameInstance* GameInstance = Cast<UNBC_GameInstance>(World->GetGameInstance());	

	TArray<int32> Nums;

	for (int32 i = 1; i < 4; i++)
	{
		int32 DivideNum = 0;

		if (Number[i] >= TEXT('0') && Number[i] <= TEXT('9'))
		{
			DivideNum = Number[i] - TEXT('0');
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Not a int32: %c"), Number[i]);
			return;
		}


		//숫자 중첩 찾기
		if (Nums.Contains(DivideNum))
		{
			UE_LOG(LogTemp, Warning, TEXT("DivideNum Contain Nums: %d"), DivideNum);
			return;
		}


		Nums.Add(DivideNum);
	}

	ContextObject->CheckNum(Nums);

}

UWorld* UNBC_BlueprintFunctionLibrary::GetGameWolrd(UObject* ContextObject)
{
	return GEngine->GetWorldFromContextObject(ContextObject, EGetWorldErrorMode::LogAndReturnNull);
}

FString UNBC_BlueprintFunctionLibrary::GetBaseBallNumber(UNBC_GameInstance* Instance)
{

	return Instance->GetBaseBallNumber();
}
