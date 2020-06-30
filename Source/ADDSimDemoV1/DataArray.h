// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "RootActor.h"
#include "DataArray.generated.h"


//USTRUCT(BlueprintType)
//struct FStructName
//{
//	GENERATED_USTRUCT_BODY()
//public:
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	float RefLat;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	float RefLon;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	TArray<ARootActor*> RootActorArr;
//};

UCLASS()
class ADDSIMDEMOV1_API ADataArray : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADataArray();

//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	TArray<ARootActor*> ParsingData(TArray<FString> MessageArr, TSubclassOf<AActor> SpawningActor);

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float RefLat;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float RefLon;
};


