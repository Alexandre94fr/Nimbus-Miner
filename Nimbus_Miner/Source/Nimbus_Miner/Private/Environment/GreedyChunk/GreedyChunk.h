// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ChunkMeshData.h"
#include "GameFramework/Actor.h"

#include "GreedyChunk.generated.h"

// Forward declarations
class FastNoiseLite;
enum class Directions : uint8;
enum class BlockTypes : uint8;
class UProceduralMeshComponent;

UCLASS()
class AGreedyChunk : public AActor
{
	GENERATED_BODY()

	struct FMask
	{
		BlockTypes BlockType;
		int Normal;
	};
	
public:	

	// Sets default values for this actor's properties
	AGreedyChunk();

	UPROPERTY(EditAnywhere, Category = "ChunkStats", meta = (ToolTip = "The world seed, changing it change how the wolrd is generated"))
	int WorldSeed = 1789;

	UPROPERTY(EditAnywhere, Category = "ChunkStats", meta = (ToolTip = "Frequency is used to create noise, which influences the steepness of slopes: the lower the frequency, the gentler the slopes, and the higher the frequency, the steeper the slopes."))
	float NoiseFrequency = 0.03f;

	// Enable the posibility to set the chunk's size to not be like a scare

	UPROPERTY(EditAnywhere, Category = "ChunkStats")
	FIntVector Size = FIntVector(32, 32, 32);

	UPROPERTY(EditAnywhere, Category = "ChunkStats")
	UMaterialInterface* Material;

	void InitGreedyChunk();

	UFUNCTION(BlueprintCallable, Category = "Chunk")
	void ModifyBlock(const FIntVector blockPosition, const BlockTypes blockType);

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	TObjectPtr<UProceduralMeshComponent> _mesh;
	TObjectPtr<FastNoiseLite> _noise;

	FChunkMeshData _meshData;
	TArray<BlockTypes> _blocks;

	int	_vertexCount = 0;

	void GenerateBlocks();

	void ApplyMesh();

	void GenerateMesh();

	void CreateQuad(FMask mask, FIntVector axisMask, int width, int height, FIntVector faceVertexes1, FIntVector faceVertexes2, FIntVector faceVertexes3, FIntVector faceVertexes4);

	int GetBlockIndex(int xPosition, int yPosition, int zPosition) const;

	BlockTypes GetBlock(FIntVector index) const;

	bool CompareMask(FMask mask1, FMask mask2) const;

	void ModifyBlockData(const FIntVector blockPosition, BlockTypes blockType);

	void ClearMesh();

	int GetEnvironmentTextureIndex(BlockTypes blockType, FVector normal) const;

	int GetOresTextureIndex(BlockTypes blockType, FVector normal) const;
};