// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nimbus_MinerProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NIMBUS_MINER_Nimbus_MinerProjectile_generated_h
#error "Nimbus_MinerProjectile.generated.h already included, missing '#pragma once' in Nimbus_MinerProjectile.h"
#endif
#define NIMBUS_MINER_Nimbus_MinerProjectile_generated_h

#define FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_SPARSE_DATA
#define FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_ACCESSORS
#define FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANimbus_MinerProjectile(); \
	friend struct Z_Construct_UClass_ANimbus_MinerProjectile_Statics; \
public: \
	DECLARE_CLASS(ANimbus_MinerProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Nimbus_Miner"), NO_API) \
	DECLARE_SERIALIZER(ANimbus_MinerProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANimbus_MinerProjectile(ANimbus_MinerProjectile&&); \
	NO_API ANimbus_MinerProjectile(const ANimbus_MinerProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANimbus_MinerProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANimbus_MinerProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANimbus_MinerProjectile) \
	NO_API virtual ~ANimbus_MinerProjectile();


#define FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_12_PROLOG
#define FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_SPARSE_DATA \
	FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_ACCESSORS \
	FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIMBUS_MINER_API UClass* StaticClass<class ANimbus_MinerProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Mes_jeux_Unreal__GitHub_Nimbus_Miner_Nimbus_Miner_Source_Nimbus_Miner_Nimbus_MinerProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
