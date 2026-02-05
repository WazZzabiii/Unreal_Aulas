// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Coin_Collectable.h"

#ifdef UNREAL_AULA1_Coin_Collectable_generated_h
#error "Coin_Collectable.generated.h already included, missing '#pragma once' in Coin_Collectable.h"
#endif
#define UNREAL_AULA1_Coin_Collectable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ACollectibleCoin *********************************************************
#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Collectable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


UNREAL_AULA1_API UClass* Z_Construct_UClass_ACollectibleCoin_NoRegister();

#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Collectable_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectibleCoin(); \
	friend struct Z_Construct_UClass_ACollectibleCoin_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREAL_AULA1_API UClass* Z_Construct_UClass_ACollectibleCoin_NoRegister(); \
public: \
	DECLARE_CLASS2(ACollectibleCoin, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal_Aula1"), Z_Construct_UClass_ACollectibleCoin_NoRegister) \
	DECLARE_SERIALIZER(ACollectibleCoin)


#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Collectable_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACollectibleCoin(ACollectibleCoin&&) = delete; \
	ACollectibleCoin(const ACollectibleCoin&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectibleCoin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectibleCoin); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectibleCoin) \
	NO_API virtual ~ACollectibleCoin();


#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Collectable_h_7_PROLOG
#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Collectable_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Collectable_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Collectable_h_10_INCLASS_NO_PURE_DECLS \
	FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Collectable_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACollectibleCoin;

// ********** End Class ACollectibleCoin ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Collectable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
