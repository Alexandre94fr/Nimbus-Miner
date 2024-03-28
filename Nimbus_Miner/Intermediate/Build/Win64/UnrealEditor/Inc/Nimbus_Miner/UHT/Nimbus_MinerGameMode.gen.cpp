// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nimbus_Miner/Nimbus_MinerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNimbus_MinerGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_ANimbus_MinerGameMode();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_ANimbus_MinerGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Nimbus_Miner();
// End Cross Module References
	void ANimbus_MinerGameMode::StaticRegisterNativesANimbus_MinerGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANimbus_MinerGameMode);
	UClass* Z_Construct_UClass_ANimbus_MinerGameMode_NoRegister()
	{
		return ANimbus_MinerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANimbus_MinerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANimbus_MinerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Nimbus_Miner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANimbus_MinerGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANimbus_MinerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Nimbus_MinerGameMode.h" },
		{ "ModuleRelativePath", "Nimbus_MinerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANimbus_MinerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANimbus_MinerGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANimbus_MinerGameMode_Statics::ClassParams = {
		&ANimbus_MinerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANimbus_MinerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANimbus_MinerGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANimbus_MinerGameMode()
	{
		if (!Z_Registration_Info_UClass_ANimbus_MinerGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANimbus_MinerGameMode.OuterSingleton, Z_Construct_UClass_ANimbus_MinerGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANimbus_MinerGameMode.OuterSingleton;
	}
	template<> NIMBUS_MINER_API UClass* StaticClass<ANimbus_MinerGameMode>()
	{
		return ANimbus_MinerGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANimbus_MinerGameMode);
	ANimbus_MinerGameMode::~ANimbus_MinerGameMode() {}
	struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANimbus_MinerGameMode, ANimbus_MinerGameMode::StaticClass, TEXT("ANimbus_MinerGameMode"), &Z_Registration_Info_UClass_ANimbus_MinerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANimbus_MinerGameMode), 3799338280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerGameMode_h_3467960312(TEXT("/Script/Nimbus_Miner"),
		Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
