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
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_AGreedyChunk();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_AGreedyChunk_NoRegister();
	NIMBUS_MINER_API UEnum* Z_Construct_UEnum_Nimbus_Miner_BlockTypes();
	UPackage* Z_Construct_UPackage__Script_Nimbus_Miner();
// End Cross Module References
	DEFINE_FUNCTION(AGreedyChunk::execModifyBlock)
	{
		P_GET_STRUCT(FIntVector,Z_Param_blockPosition);
		P_GET_ENUM(BlockTypes,Z_Param_blockType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyBlock(Z_Param_blockPosition,BlockTypes(Z_Param_blockType));
		P_NATIVE_END;
	}
	void AGreedyChunk::StaticRegisterNativesAGreedyChunk()
	{
		UClass* Class = AGreedyChunk::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ModifyBlock", &AGreedyChunk::execModifyBlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics
	{
		struct GreedyChunk_eventModifyBlock_Parms
		{
			FIntVector blockPosition;
			BlockTypes blockType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_blockPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_blockPosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_blockType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_blockType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_blockType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::NewProp_blockPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::NewProp_blockPosition = { "blockPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GreedyChunk_eventModifyBlock_Parms, blockPosition), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::NewProp_blockPosition_MetaData), Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::NewProp_blockPosition_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::NewProp_blockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::NewProp_blockType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::NewProp_blockType = { "blockType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GreedyChunk_eventModifyBlock_Parms, blockType), Z_Construct_UEnum_Nimbus_Miner_BlockTypes, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::NewProp_blockType_MetaData), Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::NewProp_blockType_MetaData) }; // 1604629841
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::NewProp_blockPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::NewProp_blockType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::NewProp_blockType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Chunk" },
		{ "ModuleRelativePath", "Private/Environment/GreedyChunk/GreedyChunk.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGreedyChunk, nullptr, "ModifyBlock", nullptr, nullptr, Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::GreedyChunk_eventModifyBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::GreedyChunk_eventModifyBlock_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGreedyChunk_ModifyBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGreedyChunk_ModifyBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGreedyChunk);
	UClass* Z_Construct_UClass_AGreedyChunk_NoRegister()
	{
		return AGreedyChunk::StaticClass();
	}
	struct Z_Construct_UClass_AGreedyChunk_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGreedyChunk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Nimbus_Miner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGreedyChunk_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGreedyChunk_ModifyBlock, "ModifyBlock" }, // 1079162404
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::FuncInfo) < 2048);
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreedyChunk_Statics::NewProp_NoiseFrequency_MetaData[] = {
		{ "Category", "ChunkStats" },
		{ "ModuleRelativePath", "Private/Environment/GreedyChunk/GreedyChunk.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Frequency is used to create noise, which influences the steepness of slopes: the lower the frequency, the gentler the slopes, and the higher the frequency, the steeper the slopes." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGreedyChunk_Statics::NewProp_NoiseFrequency = { "NoiseFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGreedyChunk, NoiseFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::NewProp_NoiseFrequency_MetaData), Z_Construct_UClass_AGreedyChunk_Statics::NewProp_NoiseFrequency_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "ChunkStats" },
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "ChunkStats" },
		{ "ModuleRelativePath", "Private/Environment/GreedyChunk/GreedyChunk.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGreedyChunk, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Material_MetaData), Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Material_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGreedyChunk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreedyChunk_Statics::NewProp_WorldSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreedyChunk_Statics::NewProp_NoiseFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGreedyChunk_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGreedyChunk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGreedyChunk>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGreedyChunk_Statics::ClassParams = {
		&AGreedyChunk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGreedyChunk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AGreedyChunk, AGreedyChunk::StaticClass, TEXT("AGreedyChunk"), &Z_Registration_Info_UClass_AGreedyChunk, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGreedyChunk), 1178250785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_GreedyChunk_GreedyChunk_h_2643594810(TEXT("/Script/Nimbus_Miner"),
		Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_GreedyChunk_GreedyChunk_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_GreedyChunk_GreedyChunk_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
