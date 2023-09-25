#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyDoor.generated.h"

UCLASS()
class SUBWAY_RUN_API AMyDoor : public AActor
{
    GENERATED_BODY()

public:	
    AMyDoor();

protected:
    virtual void BeginPlay() override;

public:	
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "Door")
    void OpenDoor();


    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* DoorMesh;
};
