#include "Coin_Collectable.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "MyCharacter.h"

// Sets default values
ACollectibleCoin::ACollectibleCoin()
{
    PrimaryActorTick.bCanEverTick = false;

    // Root
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

    // Collision
    CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
    CollisionSphere->SetupAttachment(RootComponent);
    CollisionSphere->SetSphereRadius(50.f);
    CollisionSphere->SetCollisionProfileName(TEXT("Trigger"));

    // Mesh
    CoinMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoinMesh"));
    CoinMesh->SetupAttachment(CollisionSphere);
    CoinMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Bind overlap
    CollisionSphere->OnComponentBeginOverlap.AddDynamic(
        this,
        &ACollectibleCoin::OnOverlapBegin



    );
}

void ACollectibleCoin::BeginPlay()
{
    Super::BeginPlay();
}

void ACollectibleCoin::OnOverlapBegin(
    UPrimitiveComponent* OverlappedComponent,
    AActor* OtherActor,
    UPrimitiveComponent* OtherComp,
    int32 OtherBodyIndex,
    bool bFromSweep,
    const FHitResult& SweepResult
)
{
    if (AMyCharacter* Player = Cast<AMyCharacter>(OtherActor))
    {
        Player->AddCoins(1);
        Destroy();
    }


    if (OtherActor && OtherActor != this)
    {
        // Simple check: player character
        if (Cast<ACharacter>(OtherActor))
        {
            UE_LOG(LogTemp, Log, TEXT("Coin collected!"));

            // Destroy the coin
            Destroy();
        }
    }
}
