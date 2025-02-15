// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nimbus_Miner/Private/Environment/ChunkBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChunkBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_AChunkBase();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_AChunkBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Nimbus_Miner();
// End Cross Module References
	void AChunkBase::StaticRegisterNativesAChunkBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChunkBase);
	UClass* Z_Construct_UClass_AChunkBase_NoRegister()
	{
		return AChunkBase::StaticClass();
	}
	struct Z_Construct_UClass_AChunkBase_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChunkBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nimbus_Miner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Environment/ChunkBase.h" },
		{ "ModuleRelativePath", "Private/Environment/ChunkBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkBase_Statics::NewProp_WorldSeed_MetaData[] = {
		{ "Category", "ChunkStats" },
		{ "ModuleRelativePath", "Private/Environment/ChunkBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The world seed, changing it change how the wolrd is generated" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChunkBase_Statics::NewProp_WorldSeed = { "WorldSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkBase, WorldSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::NewProp_WorldSeed_MetaData), Z_Construct_UClass_AChunkBase_Statics::NewProp_WorldSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkBase_Statics::NewProp_NoiseFrequency_MetaData[] = {
		{ "Category", "ChunkStats" },
		{ "ModuleRelativePath", "Private/Environment/ChunkBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Frequency is used to create noise, which influences the steepness of slopes: the lower the frequency, the gentler the slopes, and the higher the frequency, the steeper the slopes." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChunkBase_Statics::NewProp_NoiseFrequency = { "NoiseFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkBase, NoiseFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::NewProp_NoiseFrequency_MetaData), Z_Construct_UClass_AChunkBase_Statics::NewProp_NoiseFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChunkBase_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "ChunkStats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable the posibility to set the chunk's size to not be like a scare\n" },
#endif
		{ "ModuleRelativePath", "Private/Environment/ChunkBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable the posibility to set the chunk's size to not be like a scare" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChunkBase_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AChunkBase, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::NewProp_Size_MetaData), Z_Construct_UClass_AChunkBase_Statics::NewProp_Size_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChunkBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkBase_Statics::NewProp_WorldSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkBase_Statics::NewProp_NoiseFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChunkBase_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChunkBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChunkBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChunkBase_Statics::ClassParams = {
		&AChunkBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChunkBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AChunkBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChunkBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AChunkBase()
	{
		if (!Z_Registration_Info_UClass_AChunkBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChunkBase.OuterSingleton, Z_Construct_UClass_AChunkBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChunkBase.OuterSingleton;
	}
	template<> NIMBUS_MINER_API UClass* StaticClass<AChunkBase>()
	{
		return AChunkBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChunkBase);
	AChunkBase::~AChunkBase() {}
	struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_ChunkBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_ChunkBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChunkBase, AChunkBase::StaticClass, TEXT("AChunkBase"), &Z_Registration_Info_UClass_AChunkBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChunkBase), 3101629162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_ChunkBase_h_3609547416(TEXT("/Script/Nimbus_Miner"),
		Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_ChunkBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_ChunkBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
