// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nimbus_Miner/Private/Environment/VoxelFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_UVoxelFunctionLibrary();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_UVoxelFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Nimbus_Miner();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelFunctionLibrary::execWorldToChunkPosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_position);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UVoxelFunctionLibrary::WorldToChunkPosition(Z_Param_Out_position,Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelFunctionLibrary::execWorldToLocalBlockPosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_position);
		P_GET_PROPERTY(FIntProperty,Z_Param_size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UVoxelFunctionLibrary::WorldToLocalBlockPosition(Z_Param_Out_position,Z_Param_size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelFunctionLibrary::execWorldToBlockPosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=UVoxelFunctionLibrary::WorldToBlockPosition(Z_Param_Out_position);
		P_NATIVE_END;
	}
	void UVoxelFunctionLibrary::StaticRegisterNativesUVoxelFunctionLibrary()
	{
		UClass* Class = UVoxelFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WorldToBlockPosition", &UVoxelFunctionLibrary::execWorldToBlockPosition },
			{ "WorldToChunkPosition", &UVoxelFunctionLibrary::execWorldToChunkPosition },
			{ "WorldToLocalBlockPosition", &UVoxelFunctionLibrary::execWorldToLocalBlockPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics
	{
		struct VoxelFunctionLibrary_eventWorldToBlockPosition_Parms
		{
			FVector position;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelFunctionLibrary_eventWorldToBlockPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::NewProp_position_MetaData), Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::NewProp_position_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelFunctionLibrary_eventWorldToBlockPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/Environment/VoxelFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelFunctionLibrary, nullptr, "WorldToBlockPosition", nullptr, nullptr, Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::VoxelFunctionLibrary_eventWorldToBlockPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::VoxelFunctionLibrary_eventWorldToBlockPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics
	{
		struct VoxelFunctionLibrary_eventWorldToChunkPosition_Parms
		{
			FVector position;
			int32 size;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelFunctionLibrary_eventWorldToChunkPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::NewProp_position_MetaData), Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::NewProp_position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::NewProp_size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelFunctionLibrary_eventWorldToChunkPosition_Parms, size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::NewProp_size_MetaData), Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::NewProp_size_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelFunctionLibrary_eventWorldToChunkPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/Environment/VoxelFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelFunctionLibrary, nullptr, "WorldToChunkPosition", nullptr, nullptr, Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::VoxelFunctionLibrary_eventWorldToChunkPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::VoxelFunctionLibrary_eventWorldToChunkPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics
	{
		struct VoxelFunctionLibrary_eventWorldToLocalBlockPosition_Parms
		{
			FVector position;
			int32 size;
			FIntVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_size;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::NewProp_position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelFunctionLibrary_eventWorldToLocalBlockPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::NewProp_position_MetaData), Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::NewProp_position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::NewProp_size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelFunctionLibrary_eventWorldToLocalBlockPosition_Parms, size), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::NewProp_size_MetaData), Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::NewProp_size_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VoxelFunctionLibrary_eventWorldToLocalBlockPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::NewProp_size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/Environment/VoxelFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelFunctionLibrary, nullptr, "WorldToLocalBlockPosition", nullptr, nullptr, Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::VoxelFunctionLibrary_eventWorldToLocalBlockPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::VoxelFunctionLibrary_eventWorldToLocalBlockPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVoxelFunctionLibrary);
	UClass* Z_Construct_UClass_UVoxelFunctionLibrary_NoRegister()
	{
		return UVoxelFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Nimbus_Miner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToBlockPosition, "WorldToBlockPosition" }, // 1786839801
		{ &Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToChunkPosition, "WorldToChunkPosition" }, // 3192163852
		{ &Z_Construct_UFunction_UVoxelFunctionLibrary_WorldToLocalBlockPosition, "WorldToLocalBlockPosition" }, // 1599169762
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Environment/VoxelFunctionLibrary.h" },
		{ "ModuleRelativePath", "Private/Environment/VoxelFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelFunctionLibrary_Statics::ClassParams = {
		&UVoxelFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVoxelFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UVoxelFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVoxelFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVoxelFunctionLibrary.OuterSingleton;
	}
	template<> NIMBUS_MINER_API UClass* StaticClass<UVoxelFunctionLibrary>()
	{
		return UVoxelFunctionLibrary::StaticClass();
	}
	UVoxelFunctionLibrary::UVoxelFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelFunctionLibrary);
	UVoxelFunctionLibrary::~UVoxelFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_VoxelFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_VoxelFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelFunctionLibrary, UVoxelFunctionLibrary::StaticClass, TEXT("UVoxelFunctionLibrary"), &Z_Registration_Info_UClass_UVoxelFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelFunctionLibrary), 1908049454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_VoxelFunctionLibrary_h_352233607(TEXT("/Script/Nimbus_Miner"),
		Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_VoxelFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Private_Environment_VoxelFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
