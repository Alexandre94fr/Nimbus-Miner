// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Environment/EnvironmentEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIMBUS_MINER_EnvironmentEnums_generated_h
#error "EnvironmentEnums.generated.h already included, missing '#pragma once' in EnvironmentEnums.h"
#endif
#define NIMBUS_MINER_EnvironmentEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_EnvironmentEnums_h


#define FOREACH_ENUM_DIRECTIONS(op) \
	op(Directions::Up) \
	op(Directions::Down) \
	op(Directions::Left) \
	op(Directions::Right) \
	op(Directions::Forward) \
	op(Directions::Back) 

enum class Directions : uint8;
template<> struct TIsUEnumClass<Directions> { enum { Value = true }; };
template<> NIMBUS_MINER_API UEnum* StaticEnum<Directions>();

#define FOREACH_ENUM_BLOCKTYPES(op) \
	op(BlockTypes::Null) \
	op(BlockTypes::Air) \
	op(BlockTypes::LightCloud) \
	op(BlockTypes::NormalCloud) \
	op(BlockTypes::DarkCloud) \
	op(BlockTypes::VeryDarkCloud) \
	op(BlockTypes::VeryVeryDarkCloud) \
	op(BlockTypes::HardCloud) \
	op(BlockTypes::ElectrifiedCloud) 

enum class BlockTypes : uint8;
template<> struct TIsUEnumClass<BlockTypes> { enum { Value = true }; };
template<> NIMBUS_MINER_API UEnum* StaticEnum<BlockTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
