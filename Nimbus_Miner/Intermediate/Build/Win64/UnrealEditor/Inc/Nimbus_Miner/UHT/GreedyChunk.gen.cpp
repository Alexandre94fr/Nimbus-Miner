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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGreedyChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGreedyChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGreedyChunk_Statics::ClassParams = {
		&AGreedyChunk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::Class_MetaDataParams), Z_Construct_UClass_AGreedyChunk_Statics::Class_MetaDataParams)
	};
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
		{ Z_Construct_UClass_AGreedyChunk, AGreedyChunk::StaticClass, TEXT("AGreedyChunk"), &Z_Registration_Info_UClass_AGreedyChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGreedyChunk), 3393685861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_GreedyChunk_GreedyChunk_h_4245650202(TEXT("/Script/Nimbus_Miner"),
		Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_GreedyChunk_GreedyChunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_GreedyChunk_GreedyChunk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
