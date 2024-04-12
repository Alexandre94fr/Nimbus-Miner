#pragma once

// Represent the block's face direction
UENUM(BlueprintType)
enum class Directions : uint8
{
	Up,
	Down,
	Left,
	Right,
	Forward,
	Back
};

// Represent all block's types
UENUM(BlueprintType)
enum class BlockTypes : uint8
{
	Null,

	// -- Transparent blocks -- //
	Air,

	// -- Opaque blocks -- //

	// Environment
	LightCloud,
	NormalCloud,
	DarkCloud,
	VeryDarkCloud,
	VeryVeryDarkCloud,

	// Resources
	HardCloud,
	ElectrifiedCloud
};