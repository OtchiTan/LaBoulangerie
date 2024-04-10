// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/Inventory/LBInventoryComponent.h"
#include "GameFramework/Character.h"

#include "LBCharacter.generated.h"


class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class LABOULANGERIE_API ALBCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ALBCharacter();
	UPROPERTY(EditAnywhere)
	ULBInventoryComponent* InventoryComponent;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	UInputMappingContext* MoveMappingContext;
	UPROPERTY(EditAnywhere)
	UInputAction* MoveAction;
	void Move(const FInputActionValue& Value);

	UPROPERTY(EditAnywhere)
	UInputAction* MoveCamAction;
	void MoveCam(const FInputActionValue& Value);

	UPROPERTY(EditAnywhere)
	UInputAction* MoveJumpAction;

	
};
