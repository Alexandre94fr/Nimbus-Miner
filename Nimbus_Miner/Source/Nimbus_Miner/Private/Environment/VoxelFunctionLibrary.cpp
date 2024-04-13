// Fill out your copyright notice in the Description page of Project Settings.

#include "Environment/VoxelFunctionLibrary.h"

// NOTE : The hard coded 100 number is there because Unreal Engine use centimeter has mesure unit, so to have meter we multiply/divide everything by 100

FIntVector UVoxelFunctionLibrary::WorldToBlockPosition(const FVector& worldPosition)
{
	return FIntVector(worldPosition) / 100;
}

FIntVector UVoxelFunctionLibrary::WorldToLocalBlockPosition(const FVector& worldPosition, const int chunkSize)
{
	const FIntVector chunkPosition = WorldToChunkPosition(worldPosition, chunkSize);

	FIntVector result = WorldToBlockPosition(worldPosition) - chunkPosition * chunkSize;

	// Negative normalization
	for (int i = 0; i < 3; i++)
	{
		if (chunkPosition[i] < 0)
		{
			result[i]--;
		}
	}

	return result;
}

FIntVector UVoxelFunctionLibrary::WorldToChunkPosition(const FVector& worldPosition, const int chunkSize)
{
	FIntVector result = {0, 0, 0};

	const int conversionRateFactor = chunkSize * 100;
	const FIntVector worldIntPosition = FIntVector(worldPosition);
	
	// We loop through each dimension value and check if there are negatif if yes we go 1 step backward
	for (int i = 0; i < 3; i++)
	{
		if (worldIntPosition[i] < 0)
		{
			result[i] = (int)(worldIntPosition[i] / conversionRateFactor) - 1;
		}
		else
		{
			result[i] = (int)(worldIntPosition[i] / conversionRateFactor);
		}
	}

	return result;
}