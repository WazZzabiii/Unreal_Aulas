// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Coin_Counter.h"

#ifdef UNREAL_AULA1_Coin_Counter_generated_h
#error "Coin_Counter.generated.h already included, missing '#pragma once' in Coin_Counter.h"
#endif
#define UNREAL_AULA1_Coin_Counter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoin_Counter ************************************************************
#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateCoins);


UNREAL_AULA1_API UClass* Z_Construct_UClass_UCoin_Counter_NoRegister();

#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoin_Counter(); \
	friend struct Z_Construct_UClass_UCoin_Counter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREAL_AULA1_API UClass* Z_Construct_UClass_UCoin_Counter_NoRegister(); \
public: \
	DECLARE_CLASS2(UCoin_Counter, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Unreal_Aula1"), Z_Construct_UClass_UCoin_Counter_NoRegister) \
	DECLARE_SERIALIZER(UCoin_Counter)


#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoin_Counter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoin_Counter(UCoin_Counter&&) = delete; \
	UCoin_Counter(const UCoin_Counter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoin_Counter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoin_Counter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoin_Counter) \
	NO_API virtual ~UCoin_Counter();


#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h_13_PROLOG
#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h_16_INCLASS_NO_PURE_DECLS \
	FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoin_Counter;

// ********** End Class UCoin_Counter **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
