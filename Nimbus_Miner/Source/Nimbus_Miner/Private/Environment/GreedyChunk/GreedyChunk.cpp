// Fill out your copyright notice in the Description page of Project Settings.


#include "Environment/GreedyChunk/GreedyChunk.h"

// Sets default values
AGreedyChunk::AGreedyChunk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGreedyChunk::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGreedyChunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

