// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Player/LBCharacter.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

// Sets default values
ALBCharacter::ALBCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InventoryComponent=CreateDefaultSubobject<ULBInventoryComponent>("Inventory");
}

// Called when the game starts or when spawned
void ALBCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(MoveMappingContext, 0);
		}
	}
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
	UEnhancedInputComponent* EnhancedInputComponent=Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (EnhancedInputComponent)
	{
		EnhancedInputComponent->BindAction(MoveAction,ETriggerEvent::Triggered,this,&ALBCharacter::Move);
		EnhancedInputComponent->BindAction(MoveCamAction,ETriggerEvent::Triggered,this,&ALBCharacter::MoveCam);
		EnhancedInputComponent->BindAction(MoveJumpAction,ETriggerEvent::Triggered,this,&ALBCharacter::Jump);
	}
}

void ALBCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector=Value.Get<FVector2D>();
	AddMovementInput(GetActorForwardVector(),MovementVector.Y);
	AddMovementInput(GetActorRightVector(),MovementVector.X);
}

void ALBCharacter::MoveCam(const FInputActionValue& Value)
{
	FVector2D MovementCam=Value.Get<FVector2D>();
	AddControllerYawInput(MovementCam.X);
	AddControllerPitchInput(MovementCam.Y);
}

