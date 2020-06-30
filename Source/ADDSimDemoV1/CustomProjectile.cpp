// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomProjectile.h"

// Sets default values
ACustomProjectile::ACustomProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	CollisionComponent->InitSphereRadius(15.0);
	CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("BlockAll"));

	RootComponent = CollisionComponent;

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	ProjectileMovementComponent->InitialSpeed = 100000.0f;
	ProjectileMovementComponent->MaxSpeed = 100000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = false;


};

// Called when the game starts or when spawned
void ACustomProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACustomProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ACustomProjectile::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
}

//void ACustomProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
//{
//	/*if (OtherActor != this && OtherComponent->IsSimulatingPhysics())
//	{
//		OtherComponent->AddImpulseAtLocation(ProjectileMovementComponent->Velocity * 100.0f, Hit.ImpactPoint);
//	}
//	*/
//}

