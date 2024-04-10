// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LBItem.generated.h"

/**
 * 
 */
UCLASS()
class LABOULANGERIE_API ULBItem : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	int Quantity;
};
