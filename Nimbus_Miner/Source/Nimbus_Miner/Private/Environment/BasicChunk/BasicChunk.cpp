// Fill out your copyright notice in the Description page of Project Settings.

#include "BasicChunk.h"
#include "EnvironmentEnums.h"
#include "ExternalAssets/FastNoiseLite.h"
#include "ProceduralMeshComponent.h"

// Sets default values
ABasicChunk::ABasicChunk()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Initialisation of the private variables
	_mesh = CreateDefaultSubobject<UProceduralMeshComponent>("Mesh");

	// Creating the noise
	_noise = new FastNoiseLite(WorldSeed);
	_noise->SetFrequency(Frequency);
	_noise->SetNoiseType(FastNoiseLite::NoiseType_Perlin);
	_noise->SetFractalType(FastNoiseLite::FractalType_FBm);

	// Changing the size of the array to the cube of the chunk Size
	_blocks.SetNum(Size * Size * Size);

	_mesh->SetCastShadow(false);
}

// Called when the game starts or when spawned
void ABasicChunk::BeginPlay()
{
	Super::BeginPlay();

	GenerateBlocks();

	GenerateMesh();

	ApplyMesh();
}

void ABasicChunk::GenerateBlocks()
{
	FVector chunkLocation = GetActorLocation();

	// NOTE : Remember than Unreal Engine invert Y and Z axis, so Z is top to button axis

	for (int x = 0; x < Size; x++)
	{
		for (int y = 0; y < Size; y++)
		{
			// The hard coded 100 number is there because Unreal Engine use centimeter has mesure unit, so to have meter we multiply/divide everything by 100

			const float xPosition = (x * 100 + chunkLocation.X) / 100;
			const float yPosition = (y * 100 + chunkLocation.Y) / 100;

			//const int height = FMath::Clamp(FMath::RoundToInt((_noise->GetNoise(xPosition, yPosition) + 1) * Size / 2), 0, Size);
			const int height = FMath::RoundToInt((_noise->GetNoise(xPosition, yPosition) + 1) * Size / 2);

			if (height < 0 || height > Size)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, FString::Printf(TEXT("The height [%d] is not between 0 and %d"), height, Size));
				return;
				// If there are too many errors you can clamp the height between 0 and size (Replace the second height definition by the commented one)
			}

			// All the blocks under and at the height became clouds
			for (int z = 0; z < height; z++)
			{
				_blocks[GetBlockIndex(x, y, z)] = BlockTypes::NormalCloud;
			}

			// Otherwise them became air
			for (int z = height; z < Size; z++)
			{
				_blocks[GetBlockIndex(x, y, z)] = BlockTypes::Air;
			}
		}
	}
}

void ABasicChunk::GenerateMesh()
{
	// We iterate through all blocks
	for (int x = 0; x < Size; x++)
	{
		for (int y = 0; y < Size; y++)
		{
			for (int z = 0; z < Size; z++)
			{
				// If this block is not air we continue the code
				if (_blocks[GetBlockIndex(x, y, z)] != BlockTypes::Air)
				{
					const FVector position = FVector(x, y, z);

					// We iterate through all block's face
					for (Directions direction : { Directions::Up, Directions::Down, Directions::Left, Directions::Right, Directions::Forward, Directions::Back })
					{
						// If the block's face touch air then we add this face to the mesh (so it will render)  
						if (Check(GetPositionInDirection(direction, position)))
						{
							CreateFace(direction, position * 100);
						}
					}
				}
			}
		}
	}
}

void ABasicChunk::ApplyMesh() const
{
	_mesh->CreateMeshSection(
		0,
		_vertexData,
		_triangleData,
		TArray<FVector>(),
		_UVData,
		TArray<FColor>(),
		TArray<FProcMeshTangent>(),
		true
	);
}

bool ABasicChunk::Check(FVector position) const
{
	// If the given position is outside the BasicChunk
	if (position.X >= Size || position.Y >= Size || position.Z >= Size || position.X < 0 || position.Y < 0 || position.Z < 0)
	{
		return true;
	}

	// Return true if the block at the given position is Air
	return _blocks[GetBlockIndex(position.X, position.Y, position.Z)] == BlockTypes::Air;
}

void ABasicChunk::CreateFace(Directions direction, FVector position)
{
	_vertexData.Append(GetFaceVertices(direction, position));

	_UVData.Append({ FVector2D(1, 1), FVector2D(1, 0), FVector2D(0, 0), FVector2D(0, 1) }); // WILL BE CHANGED WHEN ADDING SPRITES

	// Generating block triangle (link beteew three vertices)
	_triangleData.Append({ _vertexCount + 3, _vertexCount + 2, _vertexCount, _vertexCount + 2, _vertexCount + 1, _vertexCount });

	_vertexCount += 4;
}

TArray<FVector> ABasicChunk::GetFaceVertices(Directions direction, FVector position) const
{
	TArray<FVector> vertices;

	for (int i = 0; i < 4; i++)
	{
		vertices.Add(_blockVertexData[BlockFaceData[i + static_cast<int>(direction) * 4]] * Scale + position);
	}

	return vertices;
}

FVector ABasicChunk::GetPositionInDirection(Directions direction, FVector position) const
{
	switch (direction)
	{
	case Directions::Up:		return position + FVector::UpVector;
	case Directions::Down:		return position + FVector::DownVector;
	case Directions::Left:		return position + FVector::LeftVector;
	case Directions::Right:		return position + FVector::RightVector;
	case Directions::Forward:	return position + FVector::ForwardVector;
	case Directions::Back:		return position + FVector::BackwardVector;

	default: throw std::invalid_argument("Invalid direction");
	}
}

int ABasicChunk::GetBlockIndex(int xPosition, int yPosition, int zPosition) const
{
	return zPosition * Size * Size + yPosition * Size + xPosition;
}