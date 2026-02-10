#include "Moving_Platforms_C.h"

AMovingPlatform::AMovingPlatform()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	// Equivalente ao "Get Actor Location" no BeginPlay
	StartLocation = GetActorLocation();

	if (MovementCurve)
	{
		FOnTimelineFloat UpdateFunction;
		UpdateFunction.BindUFunction(this, FName("TimelineUpdate"));

		FOnTimelineEvent FinishedFunction;
		FinishedFunction.BindUFunction(this, FName("TimelineFinished"));

		MovementTimeline.AddInterpFloat(MovementCurve, UpdateFunction);
		MovementTimeline.SetTimelineFinishedFunc(FinishedFunction);
	}
}

void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovementTimeline.TickTimeline(DeltaTime);
}


void AMovingPlatform::TimelineUpdate(float Alpha)
{
	// Lerp igual ao Blueprint
	FVector NewLocation = FMath::Lerp(StartLocation, EndLocation, Alpha);
	SetActorLocation(NewLocation);
}

void AMovingPlatform::TimelineFinished()
{
	
}


void AMovingPlatform::MovePlatformToEnd()
{
	if (MovementCurve)
	{
		MovementTimeline.PlayFromStart();
	}
}

void AMovingPlatform::MovePlatformToStart()
{
	if (MovementCurve)
	{
		MovementTimeline.ReverseFromEnd();
	}
}

