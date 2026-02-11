
#include "MovingPlatform.h"
#include "Components/StaticMeshComponent.h"

AMovingPlatform::AMovingPlatform()
{
    PrimaryActorTick.bCanEverTick = true;

    PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlatformMesh"));
    RootComponent = PlatformMesh;
}

void AMovingPlatform::BeginPlay()
{
    Super::BeginPlay();

    StartLocation = GetActorLocation();
}

void AMovingPlatform::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector CurrentLocation = GetActorLocation();

    float DistanceMoved = FVector::Dist(CurrentLocation, StartLocation);

    if (DistanceMoved >= MoveDistance)
    {
        bMovingForward = !bMovingForward;
    }

    FVector Direction = bMovingForward ? FVector::UpVector : -FVector::UpVector;

    FVector NewLocation = CurrentLocation + (Direction * MoveSpeed * DeltaTime);

    SetActorLocation(NewLocation);
}
