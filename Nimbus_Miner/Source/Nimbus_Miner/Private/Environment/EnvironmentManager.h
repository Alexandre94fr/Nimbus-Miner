// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GreedyChunk/GreedyChunk.h"

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

	UPROPERTY(EditAnywhere, Category = "WorldStats", meta = (ToolTip = "The world seed, changing it change how the world is generated", EditCondition = "IsWorldSeedRandom == false", EditConditionHides))
	int WorldSeed = 1789;

	UPROPERTY(EditAnywhere, Category = "WorldStats", meta = (ToolTip = "Frequency is used to create noise, which influences the steepness of slopes: the lower the frequency, the gentler the slopes, and the higher the frequency, the steeper the slopes."))
	float NoiseFrequency = 0.03f;

	UPROPERTY(EditAnywhere, Category = "WorldStats", meta = (ToolTip = "The radius of chunks spawned at the start of the game"))
	int DrawDistance = 5;

	UPROPERTY(EditAnywhere, Category = "WorldStats|ChunkStats", meta = (ToolTip = "The type of chunks generated (WARNING : If you change it by another chunk type, it will not works, due to the lack of time in development)"))
	TSubclassOf<AActor> TypeOfChunkLoaded = AGreedyChunk::StaticClass();

	UPROPERTY(EditAnywhere, Category = "WorldStats|ChunkStats", meta = (ToolTip = "The size of the chunk in X, Y, and Z axis, unit in meter"))
	FIntVector ChunksSize = FIntVector(32, 32, 32);

	UPROPERTY(EditAnywhere, Category = "WorldStats|ChunkStats")
	UMaterialInterface* Material;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	void RandomizeWorldStats();

	void CreateAllStartingChunks();
};