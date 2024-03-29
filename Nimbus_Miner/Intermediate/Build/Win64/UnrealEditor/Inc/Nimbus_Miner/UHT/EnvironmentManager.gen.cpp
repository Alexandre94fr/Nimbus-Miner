// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nimbus_Miner/Private/Environment/EnvironmentManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_AEnvironmentManager();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_AEnvironmentManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Nimbus_Miner();
// End Cross Module References
	void AEnvironmentManager::StaticRegisterNativesAEnvironmentManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnvironmentManager);
	UClass* Z_Construct_UClass_AEnvironmentManager_NoRegister()
	{
		return AEnvironmentManager::StaticClass();
	}
	struct Z_Construct_UClass_AEnvironmentManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WorldSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeOfChunkLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TypeOfChunkLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChunksSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChunksSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnvironmentManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nimbus_Miner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Environment/EnvironmentManager.h" },
		{ "ModuleRelativePath", "Private/Environment/EnvironmentManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_WorldSeed_MetaData[] = {
		{ "Category", "WorldStats" },
		{ "ModuleRelativePath", "Private/Environment/EnvironmentManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The world seed, changing it change how the wolrd is generated" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_WorldSeed = { "WorldSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentManager, WorldSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_WorldSeed_MetaData), Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_WorldSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_NoiseFrequency_MetaData[] = {
		{ "Category", "WorldStats" },
		{ "ModuleRelativePath", "Private/Environment/EnvironmentManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The noise frequency" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_NoiseFrequency = { "NoiseFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentManager, NoiseFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_NoiseFrequency_MetaData), Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_NoiseFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_DrawDistance_MetaData[] = {
		{ "Category", "WorldStats" },
		{ "ModuleRelativePath", "Private/Environment/EnvironmentManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The noise frequency" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_DrawDistance = { "DrawDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentManager, DrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_DrawDistance_MetaData), Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_DrawDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_TypeOfChunkLoaded_MetaData[] = {
		{ "Category", "WorldStats|ChunkStats" },
		{ "ModuleRelativePath", "Private/Environment/EnvironmentManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The world seed, changing it change how the wolrd is generated" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_TypeOfChunkLoaded = { "TypeOfChunkLoaded", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentManager, TypeOfChunkLoaded), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_TypeOfChunkLoaded_MetaData), Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_TypeOfChunkLoaded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_ChunksSize_MetaData[] = {
		{ "Category", "WorldStats|ChunkStats" },
		{ "ModuleRelativePath", "Private/Environment/EnvironmentManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the chunk in X, Y, and Z axis, unit in meter" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_ChunksSize = { "ChunksSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnvironmentManager, ChunksSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_ChunksSize_MetaData), Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_ChunksSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnvironmentManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_WorldSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_NoiseFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_DrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_TypeOfChunkLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentManager_Statics::NewProp_ChunksSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnvironmentManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnvironmentManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnvironmentManager_Statics::ClassParams = {
		&AEnvironmentManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnvironmentManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentManager_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnvironmentManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnvironmentManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnvironmentManager()
	{
		if (!Z_Registration_Info_UClass_AEnvironmentManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnvironmentManager.OuterSingleton, Z_Construct_UClass_AEnvironmentManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnvironmentManager.OuterSingleton;
	}
	template<> NIMBUS_MINER_API UClass* StaticClass<AEnvironmentManager>()
	{
		return AEnvironmentManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnvironmentManager);
	AEnvironmentManager::~AEnvironmentManager() {}
	struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_EnvironmentManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_EnvironmentManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnvironmentManager, AEnvironmentManager::StaticClass, TEXT("AEnvironmentManager"), &Z_Registration_Info_UClass_AEnvironmentManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnvironmentManager), 3880553918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_EnvironmentManager_h_2768997538(TEXT("/Script/Nimbus_Miner"),
		Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_EnvironmentManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_EnvironmentManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
