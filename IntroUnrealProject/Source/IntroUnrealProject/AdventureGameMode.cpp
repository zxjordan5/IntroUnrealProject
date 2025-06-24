// Fill out your copyright notice in the Description page of Project Settings.


#include "AdventureGameMode.h"

void AAdventureGameMode::StartPlay() {
	// Call StartPLay function from the AAdventureGaemMode parent class
	// This is necessary to handle the other logic that should run when the game stats

	Super::StartPlay();

	check(GEngine != nullptr);

	// use GEngine to access UEngine's AddOnScreenDebugMessage member function
	// which prints a message on screen when the game is running
	
	// this function takes 4 values:
	//  - a unique int key that identifies the message and prevents the same message from being added multiple times (use -1 if uniqueness doesnt matter)
	//  - a float number of seconds to display the message
	//  - an FColor that sets the text color
	//  - an FString message to print
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello world, this is AdventureGameMode!"));
}
