// Fill out your copyright notice in the Description page of Project Settings.


#include "TempStarter.h"

// Sets default values
ATempStarter::ATempStarter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATempStarter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATempStarter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

