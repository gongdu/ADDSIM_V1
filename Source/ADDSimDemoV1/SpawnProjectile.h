// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnProjectile.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ADDSIMDEMOV1_API USpawnProjectile : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpawnProjectile();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = Projectile)
	void Fire();

	UPROPERTY(BlueprintReadWrite, Category = Projectile)
	UStaticMeshComponent* TargetStaticMesh;

	/*UPROPERTY(BlueprintReadWrite, Category = Projectile)
	FRotator MuzzleRotation;
	*/	
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
	TSubclassOf<class ACustomProjectile> ProjectileClass;


};
