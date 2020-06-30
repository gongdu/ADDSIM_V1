// Fill out your copyright notice in the Description page of Project Settings.


#include "TextReader.h"

FString UTextReader::ReadFile(FString filename)
{
	FString directory = FPaths::Combine(FPaths::GameContentDir(), TEXT("Data"));
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();
	if (file.CreateDirectory(*directory))
	{
		FString myFile = directory + "/" + filename;
		FFileHelper::LoadFileToString(result, *myFile);
	}
	return result;
}

TArray<FString> UTextReader::ReadFileArray(FString filename)
{
	FString directory = FPaths::Combine(FPaths::GameContentDir(), TEXT("Data"));
	TArray<FString> result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();
	if (file.CreateDirectory(*directory))
	{
		FString myFile = directory + "/" + filename;
		FFileHelper::LoadFileToStringArray(result, *myFile);
	}
	return result;
}

TArray<FString> UTextReader::ReadFileArrayWithPath(FString path)
{
	TArray<FString> result;
	FFileHelper::LoadFileToStringArray(result, *path);
	return result;
}