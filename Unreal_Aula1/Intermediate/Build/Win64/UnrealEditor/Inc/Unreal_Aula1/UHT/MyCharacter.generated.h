// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCharacter.h"

#ifdef UNREAL_AULA1_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define UNREAL_AULA1_MyCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnCoinGrabbed ********************************************************
#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_MyCharacter_h_9_DELEGATE \
UNREAL_AULA1_API void FOnCoinGrabbed_DelegateWrapper(const FMulticastScriptDelegate& OnCoinGrabbed, int32 NumberOfCoins);


// ********** End Delegate FOnCoinGrabbed **********************************************************

// ********** Begin Class AMyCharacter *************************************************************
#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_MyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddCoins);


UNREAL_AULA1_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();

#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_MyCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREAL_AULA1_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Unreal_Aula1"), Z_Construct_UClass_AMyCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMyCharacter)


#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_MyCharacter_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyCharacter(AMyCharacter&&) = delete; \
	AMyCharacter(const AMyCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter) \
	NO_API virtual ~AMyCharacter();


#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_MyCharacter_h_11_PROLOG
#define FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_MyCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_MyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_MyCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_MyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyCharacter;

// ********** End Class AMyCharacter ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_MyCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
