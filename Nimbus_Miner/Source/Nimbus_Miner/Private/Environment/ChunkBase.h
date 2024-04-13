// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChunkMeshData.h"
#include "GameFramework/Actor.h"
#include "ChunkBase.generated.h"

// Forward declarations
enum class BlockTypes : uint8;
class FastNoiseLite;
class UProceduralMeshComponent;

UCLASS()
class AChunkBase : public AActor
{
	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	AChunkBase();

	UPROPERTY(EditAnywhere, Category = "ChunkStats", meta = (ToolTip = "The world seed, changing it change how the wolrd is generated"))
	int WorldSeed = 1789;

	UPROPERTY(EditAnywhere, Category = "ChunkStats", meta = (ToolTip = "Frequency is used to create noise, which influences the steepness of slopes: the lower the frequency, the gentler the slopes, and the higher the frequency, the steeper the slopes."))
	float NoiseFrequency = 0.03f;

	// Enable the posibility to set the chunk's size to not be like a scare

	UPROPERTY(EditAnywhere, Category = "ChunkStats")
	FIntVector Size = FIntVector(32, 32, 32);

	virtual void InitGreedyChunk();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void GenerateHeighMap();

	virtual void GenerateMesh();

	TObjectPtr<UProceduralMeshComponent> _mesh;
	TObjectPtr<FastNoiseLite> _noise;

	FChunkMeshData _meshData;
	TArray<BlockTypes> _blocks;

	int	_vertexCount = 0;

private:

	void ApplyMesh() const;

};