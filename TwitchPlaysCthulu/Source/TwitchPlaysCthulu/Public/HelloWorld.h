// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "GameFramework/Pawn.h"
#include "HelloWorld.generated.h"

UCLASS()
class TWITCHPLAYSCTHULU_API UHelloWorld : public APawn, public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHelloWorld();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent);

	void HiAlex();
};
