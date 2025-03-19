// Fill out your copyright notice in the Description page of Project Settings.


#include "NBC_GameMode.h"

ANBC_GameMode::ANBC_GameMode()
{


}

void ANBC_GameMode::StartPlay()
{
	Super::StartPlay();

	TArray<int> Nums;
	//TSet<int> Nums;

	for (int32 i = 0; i < 10; i++)
	{
		Nums.Add(i);
	}

	for (int32 i = 0; i < 3; i++)
	{
		int32 RemoveNum = FMath::RandRange(0, Nums.Num() - 1);
		
		Number.Add(Nums[RemoveNum]);
		//Nums.
		Nums.RemoveAt(RemoveNum);
	}

	for (int32 i = 0; i < 3; i++)
	{
		UE_LOG(LogTemp, Log, TEXT("%d , "), Number[i]);
	}


}

void ANBC_GameMode::CheckNumber(int32 Num)
{
	//999 확인
	if (Num > 999)
	{
		UE_LOG(LogTemp, Warning, TEXT("Num > 999 return"));
		return;
	}

	int32 tempNum = Num;
	TArray<int> Nums;

	for (int32 i = 0; i < 3; i++)
	{
		int32 DivideNum = Num % 10;
		Num /= 10;
		Nums.Add(DivideNum);
	}

}

int ANBC_GameMode::CheckBaseBall(int32 Num, int32 index)
{
	// 0 아웃 1 볼 2 스트라이크

	//확인
	if (Number.Find(Num))
	{

	}

	return -1;
}
