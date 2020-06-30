// Fill out your copyright notice in the Description page of Project Settings.


#include "DataArray.h"


ADataArray::ADataArray()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}


//// Called when the game starts or when spawned
//void ADataArray::BeginPlay()
//{
//	Super::BeginPlay();
//	
//}
//
//// Called every frame
//void ADataArray::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

TArray<ARootActor*> ADataArray::ParsingData(TArray<FString> MessageArr, TSubclassOf<AActor> SpawningActor)
{
	TArray<ARootActor*> SpawnedActorArr;
	for (const auto& str : MessageArr) 
	{
		TArray<FString> Array = {};
		str.ParseIntoArray(Array, TEXT(" "));
		if (Array.Num() > 1)
		{
			if (Array[0] == TEXT("PlatformID"))
			{
				ARootActor* SpawnedActor = GetWorld()->SpawnActor<ARootActor>(SpawningActor, FVector::ZeroVector, FRotator::ZeroRotator);
				SpawnedActor->PlatformID = FCString::Atoi(*Array[1]);
				SpawnedActorArr.Emplace(SpawnedActor);
				SpawnedActor->RefLat = RefLat;
				SpawnedActor->RefLon = RefLon;
			}
			else if (Array[0] == TEXT("PlatformData"))
			{
				int32 index = FCString::Atoi(*Array[1]) - 1;
				SpawnedActorArr[index]->DataArray.Add(str);
			}
			else if (Array[0] == TEXT("RefLat"))
			{
				RefLat = FCString::Atof(*Array[1]);
			}
			else if (Array[0] == TEXT("RefLon"))
			{
				RefLon = FCString::Atof(*Array[1]);
			}
		}
	}
	return SpawnedActorArr;
}

