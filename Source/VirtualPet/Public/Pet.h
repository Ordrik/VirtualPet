// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Pet.generated.h"

UCLASS()
class VIRTUALPET_API APet : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APet();

	/* Stats */

	// Basic Needs
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats|BasicNeeds")
		float MaxHunger;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats|BasicNeeds")
		float Hunger;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats|BasicNeeds")
		float HungerMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats|BasicNeeds")
		float MaxThirst;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats|BasicNeeds")
		float Thirst;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats|BasicNeeds")
		float ThirstMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats|BasicNeeds")
		float MaxHappiness;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats|BasicNeeds")
		float Happiness;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats|BasicNeeds")
		float HappinessMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats|BasicNeeds")
		float MaxSanitation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats|BasicNeeds")
		float Sanitation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats|BasicNeeds")
		float SanitationMultiplier;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FTimerHandle BasicNeedsHandle;

public:	
	// Called when the pet is born
	UFUNCTION(BlueprintCallable)
	void OnBirth();

	UFUNCTION()
	void BasicNeedsTimer();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
