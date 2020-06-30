// Fill out your copyright notice in the Description page of Project Settings.


#include "RootActor.h"

// Sets default values
ARootActor::ARootActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARootActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARootActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

