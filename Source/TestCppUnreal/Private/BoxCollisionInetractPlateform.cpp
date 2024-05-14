// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxCollisionInetractPlateform.h"




// Sets default values
ABoxCollisionInetractPlateform::ABoxCollisionInetractPlateform()
{

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plateform"));
	SetRootComponent(Mesh);


}

// Called when the game starts or when spawned
void ABoxCollisionInetractPlateform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoxCollisionInetractPlateform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

