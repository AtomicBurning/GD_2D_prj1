// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "PaperSpriteComponent.h"
#include "Components/BoxComponent.h"

#include "BreakableScenery.generated.h"

UCLASS()
class GD_2D_PRJ1_API ABreakableScenery : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABreakableScenery();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visuals")
	UPaperSpriteComponent* Sprite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Object")
	UBoxComponent* Box;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
