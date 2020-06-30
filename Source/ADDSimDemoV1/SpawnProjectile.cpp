// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnProjectile.h"
#include "CustomProjectile.h"
 

// Sets default values for this component's properties
USpawnProjectile::USpawnProjectile()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void USpawnProjectile::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void USpawnProjectile::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void USpawnProjectile::Fire()
{
	if (ProjectileClass)
	{
		FVector MuzzleLocation = TargetStaticMesh->GetSocketLocation(TEXT("FirePoint"));
		FRotator MuzzleRotation = TargetStaticMesh->GetSocketRotation(TEXT("FirePoint"));
		UWorld* World = GetWorld();
		if (World)
		{
			ACustomProjectile* Projectile = World->SpawnActor<ACustomProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation);
			if (Projectile)
			{
				// Set the projectile's initial trajectory.
				FVector LaunchDirection = FRotationMatrix(TargetStaticMesh->GetSocketRotation(TEXT("FirePoint"))).GetUnitAxis(EAxis::X);
				//FVector LaunchDirection = MuzzleRotation.Vector();
				Projectile->FireInDirection(LaunchDirection);
			}
		}
	}
}

