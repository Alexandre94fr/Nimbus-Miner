// Fill out your copyright notice in the Description page of Project Settings.

#include "GreedyChunk.h"

#include "ProceduralMeshComponent.h"
#include "../EnvironmentEnums.h"
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

			// We set all block's type by their height (compared to the ground)
			for (int z = 0; z < height; z++)
			{
				// NOTE : We begin by the last (the block more close to the bottom of the map)
				if (z < height - 30)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::ElectrifiedCloud;		// Ore

				else if (z < height - 29)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::DarkCloud;			// Environment

				else if (z < height - 25)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::VeryDarkCloud;		// Environment

				else if (z < height - 20)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::VeryVeryDarkCloud;	// Environment

				else if (z < height - 17)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::VeryDarkCloud;		// Environment

				else if (z < height - 16)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::DarkCloud;			// Environment

				else if (z < height - 15)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::NormalCloud;			// Environment

				else if (z == height - 15)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::HardCloud;			// Ore

				else if (z == height - 14)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::NormalCloud;			// Environment

				else if (z < height - 10)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::VeryVeryDarkCloud;	// Environment

				else if (z < height - 7)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::VeryDarkCloud;		// Environment

				else if (z < height - 4)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::DarkCloud;			// Environment

				else if (z < height - 1)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::NormalCloud;			// Environment

				else if (z == height - 1)
					_blocks[GetBlockIndex(x, y, z)] = BlockTypes::LightCloud;			// Environment
			}

			// Otherwise them became air (everything that's higher than [height] become Air)
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
							currentMask,
							axisMask,
							width,
							height,
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

void AGreedyChunk::CreateQuad(
	FMask mask,
	FIntVector axisMask,
	int width,
	int height,
	FIntVector faceVertexes1,
	FIntVector faceVertexes2,
	FIntVector faceVertexes3,
	FIntVector faceVertexes4)
{
	const FVector quadNormal = FVector(axisMask * mask.Normal);
	const FColor color = FColor(0, 0, 0, GetEnvironmentTextureIndex(mask.BlockType, quadNormal));

	// NOTE : The hard coded 100 number is there because Unreal Engine use centimeter has mesure unit, so to have meter we multiply/divide everything by 100

	_meshData.Vertices.Append({
		FVector(faceVertexes1) * 100,
		FVector(faceVertexes2) * 100,
		FVector(faceVertexes3) * 100,
		FVector(faceVertexes4) * 100
	});

	_meshData.Triangles.Append({
		_vertexCount,
		_vertexCount + 2 + mask.Normal,
		_vertexCount + 2 - mask.Normal,
		_vertexCount + 3,
		_vertexCount + 1 - mask.Normal,
		_vertexCount + 1 + mask.Normal
	});

	_meshData.Normals.Append({
		quadNormal,
		quadNormal,
		quadNormal,
		quadNormal
	});

	// Adding sprite to the face
	_meshData.Colors.Append({
		color,
		color,
		color,
		color
	});

	if (quadNormal.X == 1 || quadNormal.X == -1)
	{
		_meshData.UV0.Append({
			FVector2D(width, height),
			FVector2D(0, height),
			FVector2D(width, 0),
			FVector2D(0, 0),
		});
	}
	else
	{
		_meshData.UV0.Append({
			FVector2D(height, width),
			FVector2D(height, 0),
			FVector2D(0, width),
			FVector2D(0, 0),
		});
	}

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

void AGreedyChunk::ModifyBlock(const FIntVector blockPosition, BlockTypes blockType)
{
	// If the given position is outside the chunk
	if (blockPosition.X >= Size.X || blockPosition.Y >= Size.Y || blockPosition.Z >= Size.Z || blockPosition.X < 0 || blockPosition.Y < 0 || blockPosition.Z < 0) return;

	ModifyBlockData(blockPosition, blockType);

	ClearMesh();

	GenerateMesh();

	ApplyMesh();
}

void AGreedyChunk::ModifyBlockData(const FIntVector blockPosition, BlockTypes blockType)
{
	const int index = GetBlockIndex(blockPosition.X, blockPosition.Y, blockPosition.Z);

	_blocks[index] = blockType;
}

void AGreedyChunk::ClearMesh()
{
	_vertexCount = 0;
	_meshData.Clear();
}

int AGreedyChunk::GetEnvironmentTextureIndex(BlockTypes blockType, FVector normal) const
{
	switch (blockType)
	{
	// Environment
	case BlockTypes::LightCloud:

		if (normal == FVector::DownVector) return 1;
		return 0;

	case BlockTypes::NormalCloud:
		return 1;

	case BlockTypes::DarkCloud:
		return 2;

	case BlockTypes::VeryDarkCloud:
		return 3;

	case BlockTypes::VeryVeryDarkCloud:
		return 4;

	// Ores
	case BlockTypes::HardCloud:
		return 5;

	case BlockTypes::ElectrifiedCloud:
		return 6;

	default:
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("ERROR ! The block's type given [%s] in not in the switch"), blockType));
		return 255;
	}
}