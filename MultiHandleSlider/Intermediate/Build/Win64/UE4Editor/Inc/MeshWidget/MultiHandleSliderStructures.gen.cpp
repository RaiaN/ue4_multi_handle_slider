// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshWidget/Public/UMG/MultiHandleSliderStructures.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiHandleSliderStructures() {}
// Cross Module References
	MESHWIDGET_API UScriptStruct* Z_Construct_UScriptStruct_FTargetLocationInfo();
	UPackage* Z_Construct_UPackage__Script_MeshWidget();
	MESHWIDGET_API UScriptStruct* Z_Construct_UScriptStruct_FTargetActorInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MESHWIDGET_API UScriptStruct* Z_Construct_UScriptStruct_FTargetTypeDescription();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
// End Cross Module References
class UScriptStruct* FTargetLocationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESHWIDGET_API uint32 Get_Z_Construct_UScriptStruct_FTargetLocationInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetLocationInfo, Z_Construct_UPackage__Script_MeshWidget(), TEXT("TargetLocationInfo"), sizeof(FTargetLocationInfo), Get_Z_Construct_UScriptStruct_FTargetLocationInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetLocationInfo(FTargetLocationInfo::StaticStruct, TEXT("/Script/MeshWidget"), TEXT("TargetLocationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MeshWidget_StaticRegisterNativesFTargetLocationInfo
{
	FScriptStruct_MeshWidget_StaticRegisterNativesFTargetLocationInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetLocationInfo")),new UScriptStruct::TCppStructOps<FTargetLocationInfo>);
	}
} ScriptStruct_MeshWidget_StaticRegisterNativesFTargetLocationInfo;
	struct Z_Construct_UScriptStruct_FTargetLocationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetLocationInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetLocationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetLocationInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetLocationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshWidget,
		nullptr,
		&NewStructOps,
		"TargetLocationInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTargetLocationInfo),
		alignof(FTargetLocationInfo),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetLocationInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetLocationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetLocationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetLocationInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MeshWidget();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetLocationInfo"), sizeof(FTargetLocationInfo), Get_Z_Construct_UScriptStruct_FTargetLocationInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetLocationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetLocationInfo_CRC() { return 3846171201U; }
class UScriptStruct* FTargetActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESHWIDGET_API uint32 Get_Z_Construct_UScriptStruct_FTargetActorInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetActorInfo, Z_Construct_UPackage__Script_MeshWidget(), TEXT("TargetActorInfo"), sizeof(FTargetActorInfo), Get_Z_Construct_UScriptStruct_FTargetActorInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetActorInfo(FTargetActorInfo::StaticStruct, TEXT("/Script/MeshWidget"), TEXT("TargetActorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_MeshWidget_StaticRegisterNativesFTargetActorInfo
{
	FScriptStruct_MeshWidget_StaticRegisterNativesFTargetActorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetActorInfo")),new UScriptStruct::TCppStructOps<FTargetActorInfo>);
	}
} ScriptStruct_MeshWidget_StaticRegisterNativesFTargetActorInfo;
	struct Z_Construct_UScriptStruct_FTargetActorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetActorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetActorInfo_Statics::NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTargetActorInfo_Statics::NewProp_TargetActor = { UE4CodeGen_Private::EPropertyClass::Object, "TargetActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FTargetActorInfo, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetActorInfo_Statics::NewProp_TargetActor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetActorInfo_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetActorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetActorInfo_Statics::NewProp_TargetActor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshWidget,
		nullptr,
		&NewStructOps,
		"TargetActorInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTargetActorInfo),
		alignof(FTargetActorInfo),
		Z_Construct_UScriptStruct_FTargetActorInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetActorInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetActorInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetActorInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MeshWidget();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetActorInfo"), sizeof(FTargetActorInfo), Get_Z_Construct_UScriptStruct_FTargetActorInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetActorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetActorInfo_CRC() { return 398507597U; }
class UScriptStruct* FTargetTypeDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MESHWIDGET_API uint32 Get_Z_Construct_UScriptStruct_FTargetTypeDescription_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetTypeDescription, Z_Construct_UPackage__Script_MeshWidget(), TEXT("TargetTypeDescription"), sizeof(FTargetTypeDescription), Get_Z_Construct_UScriptStruct_FTargetTypeDescription_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTargetTypeDescription(FTargetTypeDescription::StaticStruct, TEXT("/Script/MeshWidget"), TEXT("TargetTypeDescription"), false, nullptr, nullptr);
static struct FScriptStruct_MeshWidget_StaticRegisterNativesFTargetTypeDescription
{
	FScriptStruct_MeshWidget_StaticRegisterNativesFTargetTypeDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TargetTypeDescription")),new UScriptStruct::TCppStructOps<FTargetTypeDescription>);
	}
} ScriptStruct_MeshWidget_StaticRegisterNativesFTargetTypeDescription;
	struct Z_Construct_UScriptStruct_FTargetTypeDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PaddingTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerIDOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerIDOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SliderImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderStructures.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetTypeDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_PaddingTop_MetaData[] = {
		{ "Category", "Target Type Description" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_PaddingTop = { UE4CodeGen_Private::EPropertyClass::Float, "PaddingTop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTargetTypeDescription, PaddingTop), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_PaddingTop_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_PaddingTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_LayerIDOffset_MetaData[] = {
		{ "Category", "Target Type Description" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_LayerIDOffset = { UE4CodeGen_Private::EPropertyClass::Int, "LayerIDOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTargetTypeDescription, LayerIDOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_LayerIDOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_LayerIDOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_SliderImage_MetaData[] = {
		{ "Category", "Target Type Description" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderStructures.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_SliderImage = { UE4CodeGen_Private::EPropertyClass::Struct, "SliderImage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FTargetTypeDescription, SliderImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_SliderImage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_SliderImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_PaddingTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_LayerIDOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::NewProp_SliderImage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshWidget,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TargetTypeDescription",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FTargetTypeDescription),
		alignof(FTargetTypeDescription),
		Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetTypeDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTargetTypeDescription_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MeshWidget();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TargetTypeDescription"), sizeof(FTargetTypeDescription), Get_Z_Construct_UScriptStruct_FTargetTypeDescription_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTargetTypeDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTargetTypeDescription_CRC() { return 2662672544U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
