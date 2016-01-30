// Fill out your copyright notice in the Description page of Project Settings.

#include "TwitchPlaysCthulu.h"
#include "HelloWorld.h"


// Sets default values for this component's properties
UHelloWorld::UHelloWorld()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	//bWantsBeginPlay = true;
	//PrimaryActorTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHelloWorld::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UHelloWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ...
}

void UHelloWorld::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	
	// Respond when our "Grow" key is pressed or released.
	InputComponent->BindAction("QPressed", IE_Pressed, this, UHelloWorld::HiAlex);

}

void HiAlex()
{

}

