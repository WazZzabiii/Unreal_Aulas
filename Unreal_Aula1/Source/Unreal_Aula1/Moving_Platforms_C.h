
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "Moving_Platforms_C.generated.h"

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

	// Timeline
	UPROPERTY(EditAnywhere, Category = "Movement")
	UCurveFloat* MovementCurve;

private:
	FTimeline MovementTimeline;

	FVector StartLocation;

	UPROPERTY(EditAnywhere, Category = "Movement")
	FVector EndLocation;

	//Timeline callback
	UFUNCTION()
	void TimelineUpdate(float Alpha);

	UFUNCTION()
	void TimelineFinished();

public:
	//Chamam o movimento (equivalente aos Custom Events)
	UFUNCTION(BlueprintCallable)
	void MovePlatformToEnd();

	UFUNCTION(BlueprintCallable)
	void MovePlatformToStart();
};
