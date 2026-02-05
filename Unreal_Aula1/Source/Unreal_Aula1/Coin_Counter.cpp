// Fill out your copyright notice in the Description page of Project Settings.


#include "Coin_Counter.h"
#include "MyCharacter.h"
#include "Kismet/GameplayStatics.h"

void UCoin_Counter::NativeConstruct()
{
	Super::NativeConstruct();

	ACharacter* Character = UGameplayStatics::GetPlayerCharacter(this, 0);

	AMyCharacter* MyCharacter = Cast<AMyCharacter>(Character);
	if (MyCharacter)
	{
		MyCharacter->OnCoinGrabbed.AddUniqueDynamic(this, &UCoin_Counter::UpdateCoins);
	}
}

void UCoin_Counter::UpdateCoins(int32 NewAmount)
{
	TextCoins->SetText(FText::AsNumber(NewAmount));
}
