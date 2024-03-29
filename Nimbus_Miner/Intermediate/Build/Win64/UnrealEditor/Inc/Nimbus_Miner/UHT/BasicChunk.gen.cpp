// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nimbus_Miner/Private/Environment/BasicChunk/BasicChunk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicChunk() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_ABasicChunk();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_ABasicChunk_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Nimbus_Miner();
// End Cross Module References
	void ABasicChunk::StaticRegisterNativesABasicChunk()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasicChunk);
	UClass* Z_Construct_UClass_ABasicChunk_NoRegister()
	{
		return ABasicChunk::StaticClass();
	}
	struct Z_Construct_UClass_ABasicChunk_Statics
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
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nimbus_Miner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicChunk_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicChunk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Environment/BasicChunk/BasicChunk.h" },
		{ "ModuleRelativePath", "Private/Environment/BasicChunk/BasicChunk.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicChunk_Statics::NewProp_WorldSeed_MetaData[] = {
		{ "Category", "ChunkStats" },
		{ "ModuleRelativePath", "Private/Environment/BasicChunk/BasicChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The world seed, changing it change how the wolrd is generated" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasicChunk_Statics::NewProp_WorldSeed = { "WorldSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicChunk, WorldSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicChunk_Statics::NewProp_WorldSeed_MetaData), Z_Construct_UClass_ABasicChunk_Statics::NewProp_WorldSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicChunk_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "ChunkStats" },
		{ "ModuleRelativePath", "Private/Environment/BasicChunk/BasicChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The noise frequency" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicChunk_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicChunk, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicChunk_Statics::NewProp_Frequency_MetaData), Z_Construct_UClass_ABasicChunk_Statics::NewProp_Frequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicChunk_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "ChunkStats" },
		{ "ModuleRelativePath", "Private/Environment/BasicChunk/BasicChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of the chunk in X, Y, and Z axis, unit in meter" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasicChunk_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicChunk, Size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicChunk_Statics::NewProp_Size_MetaData), Z_Construct_UClass_ABasicChunk_Statics::NewProp_Size_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicChunk_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "ChunkStats" },
		{ "ModuleRelativePath", "Private/Environment/BasicChunk/BasicChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of each block's faces in the chunk, unit in meter" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABasicChunk_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicChunk, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicChunk_Statics::NewProp_Scale_MetaData), Z_Construct_UClass_ABasicChunk_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicChunk_Statics::NewProp_WorldSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicChunk_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicChunk_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicChunk_Statics::NewProp_Scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicChunk_Statics::ClassParams = {
		&ABasicChunk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABasicChunk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABasicChunk_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasicChunk_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicChunk_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABasicChunk()
	{
		if (!Z_Registration_Info_UClass_ABasicChunk.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicChunk.OuterSingleton, Z_Construct_UClass_ABasicChunk_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABasicChunk.OuterSingleton;
	}
	template<> NIMBUS_MINER_API UClass* StaticClass<ABasicChunk>()
	{
		return ABasicChunk::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicChunk);
	ABasicChunk::~ABasicChunk() {}
	struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_BasicChunk_BasicChunk_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_BasicChunk_BasicChunk_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABasicChunk, ABasicChunk::StaticClass, TEXT("ABasicChunk"), &Z_Registration_Info_UClass_ABasicChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicChunk), 329537739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_BasicChunk_BasicChunk_h_3899306933(TEXT("/Script/Nimbus_Miner"),
		Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_BasicChunk_BasicChunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_BasicChunk_BasicChunk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
