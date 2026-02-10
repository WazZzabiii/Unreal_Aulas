// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal_Aula1/Moving_Platforms_C.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMoving_Platforms_C() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
UNREAL_AULA1_API UClass* Z_Construct_UClass_AMovingPlatform();
UNREAL_AULA1_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_Unreal_Aula1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMovingPlatform Function MovePlatformToEnd *******************************
struct Z_Construct_UFunction_AMovingPlatform_MovePlatformToEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Chamam o movimento (equivalente aos Custom Events)\n" },
#endif
		{ "ModuleRelativePath", "Moving_Platforms_C.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chamam o movimento (equivalente aos Custom Events)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform_MovePlatformToEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMovingPlatform, nullptr, "MovePlatformToEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_MovePlatformToEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform_MovePlatformToEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMovingPlatform_MovePlatformToEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform_MovePlatformToEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform::execMovePlatformToEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MovePlatformToEnd();
	P_NATIVE_END;
}
// ********** End Class AMovingPlatform Function MovePlatformToEnd *********************************

// ********** Begin Class AMovingPlatform Function MovePlatformToStart *****************************
struct Z_Construct_UFunction_AMovingPlatform_MovePlatformToStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Moving_Platforms_C.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform_MovePlatformToStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMovingPlatform, nullptr, "MovePlatformToStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_MovePlatformToStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform_MovePlatformToStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMovingPlatform_MovePlatformToStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform_MovePlatformToStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform::execMovePlatformToStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MovePlatformToStart();
	P_NATIVE_END;
}
// ********** End Class AMovingPlatform Function MovePlatformToStart *******************************

// ********** Begin Class AMovingPlatform Function TimelineFinished ********************************
struct Z_Construct_UFunction_AMovingPlatform_TimelineFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Moving_Platforms_C.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform_TimelineFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMovingPlatform, nullptr, "TimelineFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_TimelineFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform_TimelineFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMovingPlatform_TimelineFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform_TimelineFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform::execTimelineFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimelineFinished();
	P_NATIVE_END;
}
// ********** End Class AMovingPlatform Function TimelineFinished **********************************

// ********** Begin Class AMovingPlatform Function TimelineUpdate **********************************
struct Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics
{
	struct MovingPlatform_eventTimelineUpdate_Parms
	{
		float Alpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Timeline callback\n" },
#endif
		{ "ModuleRelativePath", "Moving_Platforms_C.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timeline callback" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MovingPlatform_eventTimelineUpdate_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMovingPlatform, nullptr, "TimelineUpdate", Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics::MovingPlatform_eventTimelineUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics::MovingPlatform_eventTimelineUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMovingPlatform_TimelineUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMovingPlatform_TimelineUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMovingPlatform::execTimelineUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimelineUpdate(Z_Param_Alpha);
	P_NATIVE_END;
}
// ********** End Class AMovingPlatform Function TimelineUpdate ************************************

// ********** Begin Class AMovingPlatform **********************************************************
void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
{
	UClass* Class = AMovingPlatform::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MovePlatformToEnd", &AMovingPlatform::execMovePlatformToEnd },
		{ "MovePlatformToStart", &AMovingPlatform::execMovePlatformToStart },
		{ "TimelineFinished", &AMovingPlatform::execTimelineFinished },
		{ "TimelineUpdate", &AMovingPlatform::execTimelineUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMovingPlatform;
UClass* AMovingPlatform::GetPrivateStaticClass()
{
	using TClass = AMovingPlatform;
	if (!Z_Registration_Info_UClass_AMovingPlatform.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MovingPlatform"),
			Z_Registration_Info_UClass_AMovingPlatform.InnerSingleton,
			StaticRegisterNativesAMovingPlatform,
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
	return Z_Registration_Info_UClass_AMovingPlatform.InnerSingleton;
}
UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
{
	return AMovingPlatform::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMovingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Moving_Platforms_C.h" },
		{ "ModuleRelativePath", "Moving_Platforms_C.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementCurve_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timeline\n" },
#endif
		{ "ModuleRelativePath", "Moving_Platforms_C.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timeline" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Moving_Platforms_C.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingPlatform_MovePlatformToEnd, "MovePlatformToEnd" }, // 1113127979
		{ &Z_Construct_UFunction_AMovingPlatform_MovePlatformToStart, "MovePlatformToStart" }, // 682587207
		{ &Z_Construct_UFunction_AMovingPlatform_TimelineFinished, "TimelineFinished" }, // 3587532134
		{ &Z_Construct_UFunction_AMovingPlatform_TimelineUpdate, "TimelineUpdate" }, // 4012197366
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovementCurve = { "MovementCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, MovementCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementCurve_MetaData), NewProp_MovementCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingPlatform, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndLocation_MetaData), NewProp_EndLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MovementCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EndLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Unreal_Aula1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform_Statics::ClassParams = {
	&AMovingPlatform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMovingPlatform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingPlatform()
{
	if (!Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton, Z_Construct_UClass_AMovingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
AMovingPlatform::~AMovingPlatform() {}
// ********** End Class AMovingPlatform ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Moving_Platforms_C_h__Script_Unreal_Aula1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform, AMovingPlatform::StaticClass, TEXT("AMovingPlatform"), &Z_Registration_Info_UClass_AMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform), 545223514U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Moving_Platforms_C_h__Script_Unreal_Aula1_633089667(TEXT("/Script/Unreal_Aula1"),
	Z_CompiledInDeferFile_FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Moving_Platforms_C_h__Script_Unreal_Aula1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_repos_Unreal_Aulas_Unreal_Aula1_Source_Unreal_Aula1_Moving_Platforms_C_h__Script_Unreal_Aula1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
