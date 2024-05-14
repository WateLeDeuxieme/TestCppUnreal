// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractObject.h"

#include "Kismet/GameplayStatics.h"
#include "TestCppUnreal/TestCppUnrealCharacter.h"

// Sets default values
AInteractObject::AInteractObject()
{
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Patrick"));
	SetRootComponent(Mesh);
	
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AInteractObject::BeginPlay()
{
	Super::BeginPlay();
	if(ATestCppUnrealCharacter* PlayerRef = Cast<ATestCppUnrealCharacter>(UGameplayStatics::GetPlayerCharacter(this,0)))
	{
		UE_LOG(LogTemp,Warning,TEXT("TESTREFPLAYER"));
		PlayerRef->OnGrabbedObjectDelegate.AddDynamic(this,&AInteractObject::TestCallDelegate);
	}
}

// Called every frame
void AInteractObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
 
// Blueprint Native Event override implementation
bool AInteractObject::ReactToTrigger_Implementation() 
{
	UE_LOG(LogTemp,Warning,TEXT("COUCOU"));
	return false;
}

void AInteractObject::TestInterfaceCall_Implementation()
{
	UE_LOG(LogTemp,Warning,TEXT("TESTINTERFACECALL"));
}

void AInteractObject::TestCallDelegate(bool isGrabbed)
{
	UE_LOG(LogTemp,Warning,TEXT("%hhd"),isGrabbed);
}
