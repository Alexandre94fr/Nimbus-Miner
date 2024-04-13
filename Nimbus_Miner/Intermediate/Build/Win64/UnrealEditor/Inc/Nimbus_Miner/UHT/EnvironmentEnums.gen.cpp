// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nimbus_Miner/Private/Environment/EnvironmentEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentEnums() {}
// Cross Module References
	NIMBUS_MINER_API UEnum* Z_Construct_UEnum_Nimbus_Miner_BlockTypes();
	NIMBUS_MINER_API UEnum* Z_Construct_UEnum_Nimbus_Miner_Directions();
	UPackage* Z_Construct_UPackage__Script_Nimbus_Miner();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_Directions;
	static UEnum* Directions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_Directions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_Directions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Nimbus_Miner_Directions, (UObject*)Z_Construct_UPackage__Script_Nimbus_Miner(), TEXT("Directions"));
		}
		return Z_Registration_Info_UEnum_Directions.OuterSingleton;
	}
	template<> NIMBUS_MINER_API UEnum* StaticEnum<Directions>()
	{
		return Directions_StaticEnum();
	}
	struct Z_Construct_UEnum_Nimbus_Miner_Directions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Nimbus_Miner_Directions_Statics::Enumerators[] = {
		{ "Directions::Up", (int64)Directions::Up },
		{ "Directions::Down", (int64)Directions::Down },
		{ "Directions::Left", (int64)Directions::Left },
		{ "Directions::Right", (int64)Directions::Right },
		{ "Directions::Forward", (int64)Directions::Forward },
		{ "Directions::Back", (int64)Directions::Back },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Nimbus_Miner_Directions_Statics::Enum_MetaDataParams[] = {
		{ "Back.Name", "Directions::Back" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represent the block's face direction\n" },
#endif
		{ "Down.Name", "Directions::Down" },
		{ "Forward.Name", "Directions::Forward" },
		{ "Left.Name", "Directions::Left" },
		{ "ModuleRelativePath", "Private/Environment/EnvironmentEnums.h" },
		{ "Right.Name", "Directions::Right" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represent the block's face direction" },
#endif
		{ "Up.Name", "Directions::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Nimbus_Miner_Directions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Nimbus_Miner,
		nullptr,
		"Directions",
		"Directions",
		Z_Construct_UEnum_Nimbus_Miner_Directions_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Nimbus_Miner_Directions_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Nimbus_Miner_Directions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Nimbus_Miner_Directions_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Nimbus_Miner_Directions()
	{
		if (!Z_Registration_Info_UEnum_Directions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Directions.InnerSingleton, Z_Construct_UEnum_Nimbus_Miner_Directions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_Directions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_BlockTypes;
	static UEnum* BlockTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_BlockTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_BlockTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Nimbus_Miner_BlockTypes, (UObject*)Z_Construct_UPackage__Script_Nimbus_Miner(), TEXT("BlockTypes"));
		}
		return Z_Registration_Info_UEnum_BlockTypes.OuterSingleton;
	}
	template<> NIMBUS_MINER_API UEnum* StaticEnum<BlockTypes>()
	{
		return BlockTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_Nimbus_Miner_BlockTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Nimbus_Miner_BlockTypes_Statics::Enumerators[] = {
		{ "BlockTypes::Null", (int64)BlockTypes::Null },
		{ "BlockTypes::Air", (int64)BlockTypes::Air },
		{ "BlockTypes::LightCloud", (int64)BlockTypes::LightCloud },
		{ "BlockTypes::NormalCloud", (int64)BlockTypes::NormalCloud },
		{ "BlockTypes::DarkCloud", (int64)BlockTypes::DarkCloud },
		{ "BlockTypes::VeryDarkCloud", (int64)BlockTypes::VeryDarkCloud },
		{ "BlockTypes::VeryVeryDarkCloud", (int64)BlockTypes::VeryVeryDarkCloud },
		{ "BlockTypes::HardCloud", (int64)BlockTypes::HardCloud },
		{ "BlockTypes::ElectrifiedCloud", (int64)BlockTypes::ElectrifiedCloud },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Nimbus_Miner_BlockTypes_Statics::Enum_MetaDataParams[] = {
		{ "Air.Comment", "// -- Transparent blocks -- //\n" },
		{ "Air.Name", "BlockTypes::Air" },
		{ "Air.ToolTip", "-- Transparent blocks --" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represent all block's types\n" },
#endif
		{ "DarkCloud.Name", "BlockTypes::DarkCloud" },
		{ "ElectrifiedCloud.Name", "BlockTypes::ElectrifiedCloud" },
		{ "HardCloud.Comment", "// Resources\n" },
		{ "HardCloud.Name", "BlockTypes::HardCloud" },
		{ "HardCloud.ToolTip", "Resources" },
		{ "LightCloud.Comment", "// Environment\n" },
		{ "LightCloud.Name", "BlockTypes::LightCloud" },
		{ "LightCloud.ToolTip", "Environment" },
		{ "ModuleRelativePath", "Private/Environment/EnvironmentEnums.h" },
		{ "NormalCloud.Name", "BlockTypes::NormalCloud" },
		{ "Null.Name", "BlockTypes::Null" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represent all block's types" },
#endif
		{ "VeryDarkCloud.Name", "BlockTypes::VeryDarkCloud" },
		{ "VeryVeryDarkCloud.Name", "BlockTypes::VeryVeryDarkCloud" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Nimbus_Miner_BlockTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Nimbus_Miner,
		nullptr,
		"BlockTypes",
		"BlockTypes",
		Z_Construct_UEnum_Nimbus_Miner_BlockTypes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Nimbus_Miner_BlockTypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Nimbus_Miner_BlockTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Nimbus_Miner_BlockTypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Nimbus_Miner_BlockTypes()
	{
		if (!Z_Registration_Info_UEnum_BlockTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_BlockTypes.InnerSingleton, Z_Construct_UEnum_Nimbus_Miner_BlockTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_BlockTypes.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_EnvironmentEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_EnvironmentEnums_h_Statics::EnumInfo[] = {
		{ Directions_StaticEnum, TEXT("Directions"), &Z_Registration_Info_UEnum_Directions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3811140179U) },
		{ BlockTypes_StaticEnum, TEXT("BlockTypes"), &Z_Registration_Info_UEnum_BlockTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1604629841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_EnvironmentEnums_h_806195126(TEXT("/Script/Nimbus_Miner"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_EnvironmentEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_EnvironmentEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
