// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakableScenery.h"

// Sets default values
ABreakableScenery::ABreakableScenery()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	RootComponent = Sprite;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABreakableScenery::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABreakableScenery::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

