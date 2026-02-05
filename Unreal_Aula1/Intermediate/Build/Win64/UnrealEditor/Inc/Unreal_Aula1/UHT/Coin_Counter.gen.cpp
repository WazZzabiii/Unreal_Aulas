// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Aula1/Coin_Counter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoin_Counter() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UNREAL_AULA1_API UClass* Z_Construct_UClass_UCoin_Counter();
UNREAL_AULA1_API UClass* Z_Construct_UClass_UCoin_Counter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal_Aula1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoin_Counter Function UpdateCoins ***************************************
struct Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics
{
	struct Coin_Counter_eventUpdateCoins_Parms
	{
		int32 NewAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Coin_Counter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics::NewProp_NewAmount = { "NewAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Coin_Counter_eventUpdateCoins_Parms, NewAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics::NewProp_NewAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCoin_Counter, nullptr, "UpdateCoins", Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics::Coin_Counter_eventUpdateCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics::Coin_Counter_eventUpdateCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCoin_Counter_UpdateCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCoin_Counter_UpdateCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCoin_Counter::execUpdateCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCoins(Z_Param_NewAmount);
	P_NATIVE_END;
}
// ********** End Class UCoin_Counter Function UpdateCoins *****************************************

// ********** Begin Class UCoin_Counter ************************************************************
void UCoin_Counter::StaticRegisterNativesUCoin_Counter()
{
	UClass* Class = UCoin_Counter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateCoins", &UCoin_Counter::execUpdateCoins },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoin_Counter;
UClass* UCoin_Counter::GetPrivateStaticClass()
{
	using TClass = UCoin_Counter;
	if (!Z_Registration_Info_UClass_UCoin_Counter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Coin_Counter"),
			Z_Registration_Info_UClass_UCoin_Counter.InnerSingleton,
			StaticRegisterNativesUCoin_Counter,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCoin_Counter.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoin_Counter_NoRegister()
{
	return UCoin_Counter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoin_Counter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Coin_Counter.h" },
		{ "ModuleRelativePath", "Coin_Counter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextCoins_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Coin_Counter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Coin_Counter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextCoins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoin_Counter_UpdateCoins, "UpdateCoins" }, // 1554500172
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoin_Counter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoin_Counter_Statics::NewProp_TextCoins = { "TextCoins", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoin_Counter, TextCoins), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextCoins_MetaData), NewProp_TextCoins_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoin_Counter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoin_Counter_Statics::NewProp_TextCoins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoin_Counter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoin_Counter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Aula1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoin_Counter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoin_Counter_Statics::ClassParams = {
	&UCoin_Counter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCoin_Counter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoin_Counter_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoin_Counter_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoin_Counter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoin_Counter()
{
	if (!Z_Registration_Info_UClass_UCoin_Counter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoin_Counter.OuterSingleton, Z_Construct_UClass_UCoin_Counter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoin_Counter.OuterSingleton;
}
UCoin_Counter::UCoin_Counter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoin_Counter);
UCoin_Counter::~UCoin_Counter() {}
// ********** End Class UCoin_Counter **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h__Script_Unreal_Aula1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoin_Counter, UCoin_Counter::StaticClass, TEXT("UCoin_Counter"), &Z_Registration_Info_UClass_UCoin_Counter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoin_Counter), 2903600761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h__Script_Unreal_Aula1_1351375867(TEXT("/Script/Unreal_Aula1"),
	Z_CompiledInDeferFile_FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h__Script_Unreal_Aula1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Coin_Counter_h__Script_Unreal_Aula1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
