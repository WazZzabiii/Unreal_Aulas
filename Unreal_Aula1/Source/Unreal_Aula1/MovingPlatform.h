#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class UNREAL_AULA1_API AMovingPlatform : public AActor
{
    GENERATED_BODY()

public:
    AMovingPlatform();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

private:

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* PlatformMesh;

    UPROPERTY(EditAnywhere, Category = "Movement")
    float MoveSpeed = 200.f;

    UPROPERTY(EditAnywhere, Category = "Movement")
    float MoveDistance = 500.f;

    FVector StartLocation;
    bool bMovingForward = true;
};
