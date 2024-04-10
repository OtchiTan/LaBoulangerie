#pragma once

#include "LBItemData.generated.h"

USTRUCT(BlueprintType)


struct LABOULANGERIE_API FLBItemData:public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	FName Nom;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	int StackMax;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UTexture2D* Icon;
};
