#include "TCUCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ATCUCharacter::ATCUCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	SpringArmComponent->SetupAttachment(GetRootComponent());
	SpringArmComponent->bUsePawnControlRotation = true;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(SpringArmComponent);

}

// Called when the game starts or when spawned
void ATCUCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATCUCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATCUCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &ATCUCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ATCUCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &ATCUCharacter::LookUp);
	PlayerInputComponent->BindAxis("LookAround", this, &ATCUCharacter::LookAround);
}

void ATCUCharacter::MoveForward(float Amount)
{
	AddMovementInput(GetActorForwardVector(), Amount);
}

void ATCUCharacter::MoveRight(float Amount)
{
	AddMovementInput(GetActorRightVector(), Amount);
}

void ATCUCharacter::LookUp(float Amount)
{
	AddControllerPitchInput(Amount);
}

void ATCUCharacter::LookAround(float Amount)
{
	AddControllerYawInput(Amount);
}

