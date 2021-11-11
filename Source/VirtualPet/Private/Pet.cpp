// Fill out your copyright notice in the Description page of Project Settings.


#include "Pet.h"

// Sets default values
APet::APet()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APet::BeginPlay()
{
	Super::BeginPlay();

	OnBirth();
	
}

// Called when the pet is first born
void APet::OnBirth()
{
	// Set Max Stats and adds a random modifier to them
	MaxHunger = 100 + FMath::RandRange(-25.0f, 25.0f);
	MaxThirst = 100 + FMath::RandRange(-25.0f, 25.0f);
	MaxHappiness = 100 + FMath::RandRange(-25.0f, 25.0f);
	MaxSanitation = 100 + FMath::RandRange(-25.0f, 25.0f);

	// Set the current Stats to be equal to Max Stats on birth
	Hunger = MaxHunger;
	Thirst = MaxThirst;
	Happiness = MaxHappiness;
	Sanitation = MaxSanitation;

	// Set the deprecation rates to a random value
	HungerMultiplier = FMath::RandRange(0.1f, 2.0f);
	ThirstMultiplier = FMath::RandRange(0.1f, 2.0f);
	HappinessMultiplier = FMath::RandRange(0.1f, 2.0f);
	SanitationMultiplier = FMath::RandRange(0.1f, 2.0f);
}

// Called every frame
void APet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APet::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

