// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nimbus_Miner/Nimbus_MinerPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNimbus_MinerPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_ANimbus_MinerPlayerController();
	NIMBUS_MINER_API UClass* Z_Construct_UClass_ANimbus_MinerPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Nimbus_Miner();
// End Cross Module References
	void ANimbus_MinerPlayerController::StaticRegisterNativesANimbus_MinerPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANimbus_MinerPlayerController);
	UClass* Z_Construct_UClass_ANimbus_MinerPlayerController_NoRegister()
	{
		return ANimbus_MinerPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ANimbus_MinerPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Nimbus_Miner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Nimbus_MinerPlayerController.h" },
		{ "ModuleRelativePath", "Nimbus_MinerPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "Nimbus_MinerPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANimbus_MinerPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANimbus_MinerPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::ClassParams = {
		&ANimbus_MinerPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANimbus_MinerPlayerController()
	{
		if (!Z_Registration_Info_UClass_ANimbus_MinerPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANimbus_MinerPlayerController.OuterSingleton, Z_Construct_UClass_ANimbus_MinerPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANimbus_MinerPlayerController.OuterSingleton;
	}
	template<> NIMBUS_MINER_API UClass* StaticClass<ANimbus_MinerPlayerController>()
	{
		return ANimbus_MinerPlayerController::StaticClass();
	}
	ANimbus_MinerPlayerController::ANimbus_MinerPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANimbus_MinerPlayerController);
	ANimbus_MinerPlayerController::~ANimbus_MinerPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANimbus_MinerPlayerController, ANimbus_MinerPlayerController::StaticClass, TEXT("ANimbus_MinerPlayerController"), &Z_Registration_Info_UClass_ANimbus_MinerPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANimbus_MinerPlayerController), 564652693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerPlayerController_h_1074016050(TEXT("/Script/Nimbus_Miner"),
		Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
