// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDoor.h"


// Sets default values
AMyDoor::AMyDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


    // Set DoorMesh as the root component
    DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
    RootComponent = DoorMesh;
}

// Called when the game starts or when spawned
void AMyDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyDoor::OpenDoor()
{
    // Logic to open the door. For example, you can rotate the DoorMesh.
    FRotator NewRotation = DoorMesh->GetRelativeRotation();
    NewRotation.Yaw += 90.0f;  // Rotate by 90 degrees on the Yaw axis
    DoorMesh->SetRelativeRotation(NewRotation);

    UE_LOG(LogTemp, Log, TEXT("This is a log message."));
    UE_LOG(LogTemp, Warning, TEXT("This is a warning message."));
    UE_LOG(LogTemp, Error, TEXT("This is an error message."));

}