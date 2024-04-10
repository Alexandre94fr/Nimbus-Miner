// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnvironmentManager.generated.h"

UCLASS()
class AEnvironmentManager : public AActor
{
	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	AEnvironmentManager();

	UPROPERTY(EditAnywhere, Category = "WorldStats", meta = (ToolTip = "If set to true the world generated will be different each time you launch the game, otherwise you will can set a custom seed"))
	bool IsWorldSeedRandom = true;

	UPROPERTY(EditAnywhere, Category = "WorldStats", meta = (ToolTip = "The world seed, changing it change how the wolrd is generated", EditCondition = "IsWorldSeedRandom == false", EditConditionHides))
	int WorldSeed = 1789;

	UPROPERTY(EditAnywhere, Category = "WorldStats", meta = (ToolTip = "The noise frequency"))
	float NoiseFrequency = 0.03f;

	UPROPERTY(EditAnywhere, Category = "WorldStats", meta = (ToolTip = "The noise frequency"))
	int DrawDistance = 5;

	UPROPERTY(EditAnywhere, Category = "WorldStats|ChunkStats", meta = (ToolTip = "The world seed, changing it change how the wolrd is generated"))
	TSubclassOf<AActor> TypeOfChunkLoaded;

	UPROPERTY(EditAnywhere, Category = "WorldStats|ChunkStats", meta = (ToolTip = "The size of the chunk in X, Y, and Z axis, unit in meter"))
	int ChunksSize = 32;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	void RandomizeWorldStats();

	void CreateAllStartingChunks();
};