// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxActivate.h"

#include "InteractObject.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TestCppUnreal/TestCppUnrealCharacter.h"


// Sets default values
ABoxActivate::ABoxActivate()
{

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	SetRootComponent(Box);
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void ABoxActivate::BeginPlay()
{
	Super::BeginPlay();
	if(ATestCppUnrealCharacter* PlayerRef = Cast<ATestCppUnrealCharacter>(UGameplayStatics::GetPlayerCharacter(this,0)))
	{
		UE_LOG(LogTemp,Warning,TEXT("TESTREFPLAYER"));
		
	}
}


// Called when the game starts or when spawned


// Called every frame
void ABoxActivate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

}

void ABoxActivate::InBox(bool)
{
	if(ATestCppUnrealCharacter* PlayerRef = Cast<ATestCppUnrealCharacter>(UGameplayStatics::GetPlayerCharacter(this,0)))
	{
		
		
	}
}

