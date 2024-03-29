// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNimbus_Miner_init() {}
	NIMBUS_MINER_API UFunction* Z_Construct_UDelegateFunction_Nimbus_Miner_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Nimbus_Miner;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Nimbus_Miner()
	{
		if (!Z_Registration_Info_UPackage__Script_Nimbus_Miner.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Nimbus_Miner_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Nimbus_Miner",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xABF080D2,
				0x1FF233AD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Nimbus_Miner.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Nimbus_Miner.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Nimbus_Miner(Z_Construct_UPackage__Script_Nimbus_Miner, TEXT("/Script/Nimbus_Miner"), Z_Registration_Info_UPackage__Script_Nimbus_Miner, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xABF080D2, 0x1FF233AD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
