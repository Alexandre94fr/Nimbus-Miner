// Fill out your copyright notice in the Description page of Project Settings.

#include "GreedyChunk.h"

#include "../EnvironmentEnums.h"
#include "ProceduralMeshComponent.h"
#include "../ExternalAssets/FastNoiseLite.h"

// Sets default values
AGreedyChunk::AGreedyChunk()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Initialisation of the private variables
	_mesh = CreateDefaultSubobject<UProceduralMeshComponent>("Mesh");
}

// Called when the game starts or when spawned
void AGreedyChunk::BeginPlay()
{
	Super::BeginPlay();
}

void AGreedyChunk::InitGreedyChunk()
{
	// Creating the noise
	_noise = new FastNoiseLite(WorldSeed);
	_noise->SetFrequency(NoiseFrequency);
	_noise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
	_noise->SetFractalType(FastNoiseLite::FractalType_FBm);

	// Changing the size of the array to the cube of the chunk Size
	_blocks.SetNum(Size.X * Size.Y * Size.Z);

	_mesh->SetCastShadow(false);

	SetRootComponent(_mesh);

	GenerateBlocks();

	GenerateMesh();

	ApplyMesh();
}

void AGreedyChunk::GenerateBlocks()
{
	FVector chunkLocation = GetActorLocation();

	// NOTE : Remember than Unreal Engine invert Y and Z axis, so Z is button to top axis

	for (int x = 0; x < Size.X; x++)
	{
		for (int y = 0; y < Size.Y; y++)
		{
			// The hard coded 100 number is there because Unreal Engine use centimeter has mesure unit, so to have meter we multiply/divide everything by 100

			const float xPosition = (x * 100 + chunkLocation.X) / 100;
			const float yPosition = (y * 100 + chunkLocation.Y) / 100;

			const int height = FMath::Clamp(FMath::RoundToInt((_noise->GetNoise(xPosition, yPosition) + 1) * Size.Z / 2), 0, Size.Z);

			// All the blocks under and at the height became clouds
			for (int z = 0; z < height; z++)
			{
				_blocks[GetBlockIndex(x, y, z)] = BlockTypes::NormalCloud;
			}

			// Otherwise them became air
			for (int z = height; z < Size.Z; z++)
			{
				_blocks[GetBlockIndex(x, y, z)] = BlockTypes::Air;
			}
		}
	}
}

void AGreedyChunk::GenerateMesh()
{
	// We go through itch axis
	for (int axis = 0; axis < 3; axis++)
	{
		// Setting up locals variables

		const int axis1 = (axis + 1) % 3; // Return the horizontal axis
		const int axis2 = (axis + 2) % 3; // Return the vertical axis

		const int mainAxisLimit = Size[axis];
		int axis1Limit = Size[axis1];
		int axis2Limit = Size[axis2];

		FIntVector deltaAxis1 = FIntVector::ZeroValue;
		FIntVector deltaAxis2 = FIntVector::ZeroValue;

		FIntVector chunkItr = FIntVector::ZeroValue;
		FIntVector axisMask = FIntVector::ZeroValue;

		axisMask[axis] = 1;

		TArray<FMask> mask;
		mask.SetNum(axis1Limit * axis2Limit);

		// Check each slice

		for (chunkItr[axis] = -1; chunkItr[axis] < mainAxisLimit;)
		{
			int maskIteration = 0;

			for (chunkItr[axis2] = 0; chunkItr[axis2] < axis2Limit; chunkItr[axis2]++)
			{	
				for (chunkItr[axis1] = 0; chunkItr[axis1] < axis1Limit; chunkItr[axis1]++)
				{
					const BlockTypes currentBlock = GetBlock(chunkItr);
					const BlockTypes comparedBlock = GetBlock(chunkItr + axisMask);

					const bool isCurrentBlockOpaque = currentBlock != BlockTypes::Air;
					const bool isComparedBlockOpaque = comparedBlock != BlockTypes::Air;

					if (isCurrentBlockOpaque == isComparedBlockOpaque)
					{
						mask[maskIteration++] = FMask{ BlockTypes::Null, 0 };
					}
					else if (isCurrentBlockOpaque)
					{
						mask[maskIteration++] = FMask{ currentBlock, 1 };
					}
					else
					{
						mask[maskIteration++] = FMask{ comparedBlock, -1 };
					}
				}
			}

			chunkItr[axis]++;

			maskIteration = 0;

			// Generate the mesh from the mask

			// NOTE : Remember than Unreal Engine invert Y and Z axis, so Z is button to top axis

			for (int z = 0; z < axis2Limit; z++)
			{
				for (int x = 0; x < axis1Limit;)
				{
					if (mask[maskIteration].Normal != 0)
					{
						const FMask currentMask = mask[maskIteration];

						chunkItr[axis1] = x;
						chunkItr[axis2] = z;

						int width = 0;

						for (width = 1; x + width < axis1Limit && CompareMask(mask[maskIteration + width], currentMask); width++)
						{

						}

						int height = 0;
						bool maxQuadSizeReached = false;

						for (height = 1; z + height < axis2Limit; height++)
						{
							for (int i = 0; i < width; i++)
							{
								if (CompareMask(mask[maskIteration + i + height * axis1Limit], currentMask)) continue;

								maxQuadSizeReached = true;
								break;
							}

							if (maxQuadSizeReached) break;
						}

						deltaAxis1[axis1] = width;
						deltaAxis2[axis2] = height;

						CreateQuad(
							currentMask, axisMask,
							chunkItr,
							chunkItr + deltaAxis1,
							chunkItr + deltaAxis2,
							chunkItr + deltaAxis1 + deltaAxis2
						);

						// We clean variables

						deltaAxis1 = FIntVector::ZeroValue;
						deltaAxis2 = FIntVector::ZeroValue;

						for (int j = 0; j < height; j++)
						{
							for (int i = 0; i < width; i++)
							{
								mask[maskIteration + i + j * axis1Limit] = FMask { BlockTypes::Null, 0 };
							}
						}

						x += width;
						maskIteration += width;	
					}
					else
					{
						x++;
						maskIteration++;
					}
				}
			}
		}
	}
}

void AGreedyChunk::ApplyMesh()
{
	_mesh->SetMaterial(0, Material);
	_mesh->CreateMeshSection(
		0,
		_meshData.Vertices,
		_meshData.Triangles,
		_meshData.Normals,
		_meshData.UV0,
		_meshData.Colors,
		TArray<FProcMeshTangent>(),
		true
	);
}

void AGreedyChunk::CreateQuad(FMask mask, FIntVector axisMask, FIntVector faceVertexes1, FIntVector faceVertexes2, FIntVector faceVertexes3, FIntVector faceVertexes4)
{
	const FVector quadNormal = FVector(axisMask * mask.Normal);

	// NOTE : The hard coded 100 number is there because Unreal Engine use centimeter has mesure unit, so to have meter we multiply/divide everything by 100

	_meshData.Vertices.Add(FVector(faceVertexes1) * 100);
	_meshData.Vertices.Add(FVector(faceVertexes2) * 100);
	_meshData.Vertices.Add(FVector(faceVertexes3) * 100);
	_meshData.Vertices.Add(FVector(faceVertexes4) * 100);

	// Adding random color to the face
	const FColor color = FColor(
		FMath::RandRange(0, 255),
		FMath::RandRange(0, 255),
		FMath::RandRange(0, 255),
		255
	);
	_meshData.Colors.Append({ color, color, color, color });

	_meshData.Triangles.Add(_vertexCount);
	_meshData.Triangles.Add(_vertexCount + 2 + mask.Normal);
	_meshData.Triangles.Add(_vertexCount + 2 - mask.Normal);
	_meshData.Triangles.Add(_vertexCount + 3);
	_meshData.Triangles.Add(_vertexCount + 1 - mask.Normal);
	_meshData.Triangles.Add(_vertexCount + 1 + mask.Normal);

	_meshData.UV0.Add(FVector2D(0, 0));
	_meshData.UV0.Add(FVector2D(0, 1));
	_meshData.UV0.Add(FVector2D(1, 0));
	_meshData.UV0.Add(FVector2D(1, 1));

	_meshData.Normals.Add(quadNormal);
	_meshData.Normals.Add(quadNormal);
	_meshData.Normals.Add(quadNormal);
	_meshData.Normals.Add(quadNormal);

	_vertexCount += 4;
}

/// <summary> Return the conversion of the given position into the chunk's blocks index </summary>
int AGreedyChunk::GetBlockIndex(int xPosition, int yPosition, int zPosition) const
{
	return zPosition * Size.X * Size.Y + yPosition * Size.X + xPosition;
}

/// <summary> Return the type of block at the wanted position </summary>
BlockTypes AGreedyChunk::GetBlock(FIntVector index) const
{
	// If the given position is outside the chunk
	if (index.X >= Size.X || index.Y >= Size.Y || index.Z >= Size.Z || index.X < 0 || index.Y < 0 || index.Z < 0)
	{
		return BlockTypes::Air;
	}

	// Return the type of block at the wanted position
	return _blocks[GetBlockIndex(index.X, index.Y, index.Z)];
}

/// <summary> Return true if the two masks given are the same </summary>
bool AGreedyChunk::CompareMask(FMask mask1, FMask mask2) const
{
	return mask1.BlockType == mask2.BlockType && mask1.Normal == mask2.Normal;
}