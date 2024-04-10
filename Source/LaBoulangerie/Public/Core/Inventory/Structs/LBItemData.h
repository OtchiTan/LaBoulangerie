#pragma once

#include "LBItemData.generated.h"

USTRUCT(BlueprintType)


struct LABOULANGERIE_API FLBItemData:public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	FName Nom;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	int StackMax;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	UTexture2D* Icon;
};
