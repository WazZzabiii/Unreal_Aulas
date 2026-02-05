#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Coin_Collectable.generated.h"

UCLASS()
class UNREAL_AULA1_API ACollectibleCoin : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values
    ACollectibleCoin();

protected:
    virtual void BeginPlay() override;

    // Coin mesh
    UPROPERTY(VisibleAnywhere, Category = "Components")
    UStaticMeshComponent* CoinMesh;

    // Collision trigger
    UPROPERTY(VisibleAnywhere, Category = "Components")
    class USphereComponent* CollisionSphere;

    // Overlap handler
    UFUNCTION()
    void OnOverlapBegin(
        UPrimitiveComponent* OverlappedComponent,
        AActor* OtherActor,
        UPrimitiveComponent* OtherComp,
        int32 OtherBodyIndex,
        bool bFromSweep,
        const FHitResult& SweepResult
    );
};
