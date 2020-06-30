// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RootActor.generated.h"

UCLASS()
class ADDSIMDEMOV1_API ARootActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARootActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int32 PlatformID;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FString> DataArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RefLat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RefLon;
};
