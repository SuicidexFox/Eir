// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Draugar.h"

// Sets default values
AEnemy_Draugar::AEnemy_Draugar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy_Draugar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy_Draugar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy_Draugar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

