// Fill out your copyright notice in the Description page of Project Settings.

#include "Environment/ChunkBase.h"

#include "EnvironmentEnums.h"
#include "ProceduralMeshComponent.h"
#include "ExternalAssets/FastNoiseLite.h"

// Sets default values
AChunkBase::AChunkBase()
{
 	// Set this actor to call Tick() every frame.
	PrimaryActorTick.bCanEverTick = false;

	// Initialisation of the private variables
	_mesh = CreateDefaultSubobject<UProceduralMeshComponent>("Mesh");
}

// Called when the game starts or when spawned
void AChunkBase::BeginPlay()
{
	Super::BeginPlay();
}

void AChunkBase::InitGreedyChunk()
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

	GenerateHeighMap();

	GenerateMesh();

	ApplyMesh();
}

void AChunkBase::GenerateHeighMap()
{

}

void AChunkBase::GenerateMesh()
{

}

void AChunkBase::ApplyMesh() const
{
	_mesh->CreateMeshSection(
		0,
		_meshData.Vertices,
		_meshData.Triangles,
		_meshData.Normals,
		_meshData.UV0,
		TArray<FColor>(),
		TArray<FProcMeshTangent>(),
		true
	);
}