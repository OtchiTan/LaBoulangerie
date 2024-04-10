// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Structs/LBItemData.h"
#include "UObject/NoExportTypes.h"
#include "LBItem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class LABOULANGERIE_API ULBItem : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	int Quantity;
	UPROPERTY(BlueprintReadWrite)
	FLBItemData ItemData;
	int AddItem(ULBItem);
};
