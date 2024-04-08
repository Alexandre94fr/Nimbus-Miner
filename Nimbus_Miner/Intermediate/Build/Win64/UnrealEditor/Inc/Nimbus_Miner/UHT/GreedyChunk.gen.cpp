// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nimbus_Miner/Private/Environment/GreedyChunk/GreedyChunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGreedyChunk() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_AGreedyChunk();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_AGreedyChunk_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Nimbus_Miner();
// End Cross Module References
	void AGreedyChunk::StaticRegisterNativesAGreedyChunk()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGreedyChunk);
	UClass* Z_Construct_UClass_AGreedyChunk_NoRegister()
	{
		return AGreedyChunk::StaticClass();
	}
	struct Z_Construct_UClass_AGreedyChunk_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGreedyChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nimbus_Miner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreedyChunk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Environment/GreedyChunk/GreedyChunk.h" },
		{ "ModuleRelativePath", "Private/Environment/GreedyChunk/GreedyChunk.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreedyChunk_Statics::NewProp_WorldSeed_MetaData[] = {
		{ "Category", "ChunkStats" },
		{ "ModuleRelativePath", "Private/Environment/GreedyChunk/GreedyChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The world seed, changing it change how the wolrd is generated" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGreedyChunk_Statics::NewProp_WorldSeed = { "WorldSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGreedyChunk, WorldSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::NewProp_WorldSeed_MetaData), Z_Construct_UClass_AGreedyChunk_Statics::NewProp_WorldSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "ChunkStats" },
		{ "ModuleRelativePath", "Private/Environment/GreedyChunk/GreedyChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The noise frequency" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGreedyChunk, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Frequency_MetaData), Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Frequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Chunk" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable the posibility to set the chunk's size to not be like a scare\n" },
#endif
		{ "ModuleRelativePath", "Private/Environment/GreedyChunk/GreedyChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable the posibility to set the chunk's size to not be like a scare" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGreedyChunk, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Size_MetaData), Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Size_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGreedyChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreedyChunk_Statics::NewProp_WorldSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGreedyChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGreedyChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGreedyChunk_Statics::ClassParams = {
		&AGreedyChunk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGreedyChunk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_AGreedyChunk_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGreedyChunk()
	{
		if (!Z_Registration_Info_UClass_AGreedyChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGreedyChunk.OuterSingleton, Z_Construct_UClass_AGreedyChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGreedyChunk.OuterSingleton;
	}
	template<> NIMBUS_MINER_API UClass* StaticClass<AGreedyChunk>()
	{
		return AGreedyChunk::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGreedyChunk);
	AGreedyChunk::~AGreedyChunk() {}
	struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_GreedyChunk_GreedyChunk_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_GreedyChunk_GreedyChunk_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGreedyChunk, AGreedyChunk::StaticClass, TEXT("AGreedyChunk"), &Z_Registration_Info_UClass_AGreedyChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGreedyChunk), 2456172673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_GreedyChunk_GreedyChunk_h_2013473027(TEXT("/Script/Nimbus_Miner"),
		Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_GreedyChunk_GreedyChunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_GreedyChunk_GreedyChunk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
