// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Player/LBCharacter.h"


// Sets default values
ALBCharacter::ALBCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALBCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ALBCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALBCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ALBCharacter::Move(const FInputActionValue& Value)
{
	
}

