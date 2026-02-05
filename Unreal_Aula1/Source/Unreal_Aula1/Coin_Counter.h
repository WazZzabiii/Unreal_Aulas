// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Coin_Counter.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_AULA1_API UCoin_Counter : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void UpdateCoins(int32 NewAmount);

	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
	UTextBlock* TextCoins = nullptr;

};
