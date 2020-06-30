// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TextReader.generated.h"

/**
 * 
 */
UCLASS()
class ADDSIMDEMOV1_API UTextReader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
		static FString ReadFile(FString filename);

	UFUNCTION(BlueprintCallable)
		static TArray<FString> ReadFileArray(FString filename);

	UFUNCTION(BlueprintCallable)
		static TArray<FString> ReadFileArrayWithPath(FString path);

};
