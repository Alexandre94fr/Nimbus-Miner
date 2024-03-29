// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasicChunk.generated.h"

// Forward declarations
enum class Directions;
enum class BlockTypes;
class FastNoiseLite;
class UProceduralMeshComponent;

UCLASS()
class ABasicChunk : public AActor
{
	GENERATED_BODY()

public:

	// Sets default values for this actor's properties
	ABasicChunk();

	UPROPERTY(EditAnywhere, Category = "ChunkStats", meta = (ToolTip = "The world seed, changing it change how the wolrd is generated"))
	int WorldSeed = 1789;

	UPROPERTY(EditAnywhere, Category = "ChunkStats", meta = (ToolTip = "The noise frequency"))
	float Frequency = 0.03f;

	UPROPERTY(EditAnywhere, Category = "ChunkStats", meta = (ToolTip = "The size of the chunk in X, Y, and Z axis, unit in meter"))
	int Size = 32;

	UPROPERTY(EditAnywhere, Category = "ChunkStats", meta = (ToolTip = "The size of each block's faces in the chunk, unit in meter"))
	int Scale = 1;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	// Reference to the environment mesh and the noise
	TObjectPtr<UProceduralMeshComponent> _mesh;
	TObjectPtr<FastNoiseLite> _noise;

	// List all the blocks of the chunk
	TArray<BlockTypes> _blocks;

	// Mesh's datas
	TArray<FVector> _vertexData;
	TArray<int> _triangleData;
	TArray<FVector2D> _UVData;

	// Will help to generate mesh's data
	int _vertexCount = 0;

	// Block vertex's position
	const FVector _blockVertexData[8] =
	{
		// Each FVector correspond to one point (vertex) of a block
		FVector(100, 100, 100),
		FVector(100, 0, 100),
		FVector(100, 0, 0),
		FVector(100, 100, 0),
		FVector(0, 0, 100),
		FVector(0, 100, 100),
		FVector(0, 100, 0),
		FVector(0, 0, 0),
	};

	const int BlockFaceData[24] =
	{
		// Each int value correspond to a vertex of a block (there are 8)
		5, 4, 1, 0, // Up
		3, 2, 7, 6, // Down
		1, 4, 7, 2, // Left
		5, 0, 3, 6, // Right
		0, 1, 2, 3, // Forward
		4, 5, 6, 7  // Back
	};

	void GenerateBlocks();

	void GenerateMesh();

	void ApplyMesh() const;

	bool Check(FVector position) const;

	void CreateFace(Directions direction, FVector position);

	TArray<FVector> GetFaceVertices(Directions direction, FVector position) const;

	FVector GetPositionInDirection(Directions direction, FVector position) const;

	int GetBlockIndex(int xPosition, int yPosition, int zPosition) const;
};