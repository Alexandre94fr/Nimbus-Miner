// Fill out your copyright notice in the Description page of Project Settings.

#include "Environment/EnvironmentManager.h"

// Sets default values
AEnvironmentManager::AEnvironmentManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AEnvironmentManager::BeginPlay()
{
	Super::BeginPlay();

	// We spawn all start chunks 
	for (int x = -DrawDistance; x <= DrawDistance; x++) 
	{
		for (int y = -DrawDistance; y <= DrawDistance; y++)
		{
			// The hard coded 100 number is there because Unreal Engine use centimeter has mesure unit, so to have meter we multiply/divide everything by 100

			GetWorld()->SpawnActor<AActor>(TypeOfChunkLoaded, FVector(x * ChunksSize * 100, y * ChunksSize * 100, 0), FRotator::ZeroRotator);
		}
	}
}