// Fill out your copyright notice in the Description page of Project Settings.


#include "DataLoadASI.h"
//#include "RootActor.h"
//
//TArray<ARootActor*> UDataLoadASI::ParsingData(TArray<FString> MessageArr, TSubclassOf<ARootActor> SpawningActor)
//{
//
//	TArray<ARootActor*> SpawnedActorArr;
//	for (const auto& str : MessageArr)
//	{
//		TArray<FString> Array = {};
//		str.ParseIntoArray(Array, TEXT(" "));
//		if (Array.Num() > 1)
//		{
//			if (Array[0] == TEXT("PlatformID"))
//			{
//				ARootActor* SpawnedActor = GetWorld()->SpawnActor<ARootActor>(SpawningActor, FVector::ZeroVector, FRotator::ZeroRotator);
//				SpawnedActor->PlatformIDTest = FCString::Atoi(*Array[1]);
//				SpawnedActorArr.Emplace(SpawnedActor);
//			}
//			else if (Array[0] == TEXT("PlatformData"))
//			{
//				int32 index = FCString::Atoi(*Array[1]) - 1;
//				SpawnedActorArr[index]->DataArray.Add(str);
//			}
//		}
//	}
//	return SpawnedActorArr;
//}
