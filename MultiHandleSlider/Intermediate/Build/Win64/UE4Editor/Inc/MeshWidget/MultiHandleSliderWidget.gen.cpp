// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshWidget/Public/UMG/MultiHandleSliderWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiHandleSliderWidget() {}
// Cross Module References
	MESHWIDGET_API UClass* Z_Construct_UClass_UMultiHandleSliderWidget_NoRegister();
	MESHWIDGET_API UClass* Z_Construct_UClass_UMultiHandleSliderWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_MeshWidget();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveAllTargets();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_Tick();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSliderStyle();
// End Cross Module References
	void UMultiHandleSliderWidget::StaticRegisterNativesUMultiHandleSliderWidget()
	{
		UClass* Class = UMultiHandleSliderWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorAsTarget", &UMultiHandleSliderWidget::execAddActorAsTarget },
			{ "AddLocationAsTarget", &UMultiHandleSliderWidget::execAddLocationAsTarget },
			{ "CountTargetTypes", &UMultiHandleSliderWidget::execCountTargetTypes },
			{ "RemoveAllTargets", &UMultiHandleSliderWidget::execRemoveAllTargets },
			{ "RemoveTarget", &UMultiHandleSliderWidget::execRemoveTarget },
			{ "SetUpPlayerPawn", &UMultiHandleSliderWidget::execSetUpPlayerPawn },
			{ "Tick", &UMultiHandleSliderWidget::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics
	{
		struct MultiHandleSliderWidget_eventAddActorAsTarget_Parms
		{
			FString TargetID;
			FName TargetType;
			AActor* TargetActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::NewProp_TargetActor = { UE4CodeGen_Private::EPropertyClass::Object, "TargetActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MultiHandleSliderWidget_eventAddActorAsTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::NewProp_TargetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::NewProp_TargetType = { UE4CodeGen_Private::EPropertyClass::Name, "TargetType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MultiHandleSliderWidget_eventAddActorAsTarget_Parms, TargetType), METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::NewProp_TargetType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::NewProp_TargetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::NewProp_TargetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::NewProp_TargetID = { UE4CodeGen_Private::EPropertyClass::Str, "TargetID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MultiHandleSliderWidget_eventAddActorAsTarget_Parms, TargetID), METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::NewProp_TargetID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::NewProp_TargetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::NewProp_TargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::NewProp_TargetID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi Handle Slider" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiHandleSliderWidget, "AddActorAsTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MultiHandleSliderWidget_eventAddActorAsTarget_Parms), Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics
	{
		struct MultiHandleSliderWidget_eventAddLocationAsTarget_Parms
		{
			FString TargetID;
			FName TargetType;
			FVector TargetLocation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "TargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MultiHandleSliderWidget_eventAddLocationAsTarget_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetType = { UE4CodeGen_Private::EPropertyClass::Name, "TargetType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MultiHandleSliderWidget_eventAddLocationAsTarget_Parms, TargetType), METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetID = { UE4CodeGen_Private::EPropertyClass::Str, "TargetID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MultiHandleSliderWidget_eventAddLocationAsTarget_Parms, TargetID), METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::NewProp_TargetID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi Handle Slider" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiHandleSliderWidget, "AddLocationAsTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MultiHandleSliderWidget_eventAddLocationAsTarget_Parms), Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics
	{
		struct MultiHandleSliderWidget_eventCountTargetTypes_Parms
		{
			FName TargetType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MultiHandleSliderWidget_eventCountTargetTypes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::NewProp_TargetType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::NewProp_TargetType = { UE4CodeGen_Private::EPropertyClass::Name, "TargetType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MultiHandleSliderWidget_eventCountTargetTypes_Parms, TargetType), METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::NewProp_TargetType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::NewProp_TargetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::NewProp_TargetType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi Handle Slider" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiHandleSliderWidget, "CountTargetTypes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MultiHandleSliderWidget_eventCountTargetTypes_Parms), Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveAllTargets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveAllTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi Handle Slider" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveAllTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiHandleSliderWidget, "RemoveAllTargets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveAllTargets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveAllTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveAllTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveAllTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics
	{
		struct MultiHandleSliderWidget_eventRemoveTarget_Parms
		{
			FString TargetID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::NewProp_TargetID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::NewProp_TargetID = { UE4CodeGen_Private::EPropertyClass::Str, "TargetID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MultiHandleSliderWidget_eventRemoveTarget_Parms, TargetID), METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::NewProp_TargetID_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::NewProp_TargetID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::NewProp_TargetID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi Handle Slider" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiHandleSliderWidget, "RemoveTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MultiHandleSliderWidget_eventRemoveTarget_Parms), Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn_Statics
	{
		struct MultiHandleSliderWidget_eventSetUpPlayerPawn_Parms
		{
			AActor* InPlayerPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPlayerPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn_Statics::NewProp_InPlayerPawn = { UE4CodeGen_Private::EPropertyClass::Object, "InPlayerPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MultiHandleSliderWidget_eventSetUpPlayerPawn_Parms, InPlayerPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn_Statics::NewProp_InPlayerPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Multi Handle Slider" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiHandleSliderWidget, "SetUpPlayerPawn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MultiHandleSliderWidget_eventSetUpPlayerPawn_Parms), Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiHandleSliderWidget_Tick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiHandleSliderWidget_Tick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiHandleSliderWidget_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiHandleSliderWidget, "Tick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiHandleSliderWidget_Tick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMultiHandleSliderWidget_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiHandleSliderWidget_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiHandleSliderWidget_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMultiHandleSliderWidget_NoRegister()
	{
		return UMultiHandleSliderWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMultiHandleSliderWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTypesDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTypesDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderHandleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SliderHandleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SliderBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SliderBarColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiHandleSliderWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultiHandleSliderWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiHandleSliderWidget_AddActorAsTarget, "AddActorAsTarget" }, // 3064516941
		{ &Z_Construct_UFunction_UMultiHandleSliderWidget_AddLocationAsTarget, "AddLocationAsTarget" }, // 444200740
		{ &Z_Construct_UFunction_UMultiHandleSliderWidget_CountTargetTypes, "CountTargetTypes" }, // 2451176007
		{ &Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveAllTargets, "RemoveAllTargets" }, // 131848322
		{ &Z_Construct_UFunction_UMultiHandleSliderWidget_RemoveTarget, "RemoveTarget" }, // 1814475804
		{ &Z_Construct_UFunction_UMultiHandleSliderWidget_SetUpPlayerPawn, "SetUpPlayerPawn" }, // 2355492762
		{ &Z_Construct_UFunction_UMultiHandleSliderWidget_Tick, "Tick" }, // 267595068
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiHandleSliderWidget_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Multi Handle Slider" },
		{ "IncludePath", "UMG/MultiHandleSliderWidget.h" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_PlayerPawn = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UMultiHandleSliderWidget, PlayerPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_PlayerPawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_PlayerPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_MaxAngle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_MaxAngle = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMultiHandleSliderWidget, MaxAngle), METADATA_PARAMS(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_MaxAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_MaxAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_MinAngle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_MinAngle = { UE4CodeGen_Private::EPropertyClass::Float, "MinAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMultiHandleSliderWidget, MinAngle), METADATA_PARAMS(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_MinAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_MinAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_TargetTypesDataTable_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_TargetTypesDataTable = { UE4CodeGen_Private::EPropertyClass::Object, "TargetTypesDataTable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMultiHandleSliderWidget, TargetTypesDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_TargetTypesDataTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_TargetTypesDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_SliderHandleColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_SliderHandleColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SliderHandleColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMultiHandleSliderWidget, SliderHandleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_SliderHandleColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_SliderHandleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_SliderBarColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_SliderBarColor = { UE4CodeGen_Private::EPropertyClass::Struct, "SliderBarColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMultiHandleSliderWidget, SliderBarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_SliderBarColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_SliderBarColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/UMG/MultiHandleSliderWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_WidgetStyle = { UE4CodeGen_Private::EPropertyClass::Struct, "WidgetStyle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMultiHandleSliderWidget, WidgetStyle), Z_Construct_UScriptStruct_FSliderStyle, METADATA_PARAMS(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_WidgetStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_WidgetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiHandleSliderWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_PlayerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_MaxAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_MinAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_TargetTypesDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_SliderHandleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_SliderBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiHandleSliderWidget_Statics::NewProp_WidgetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiHandleSliderWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiHandleSliderWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultiHandleSliderWidget_Statics::ClassParams = {
		&UMultiHandleSliderWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMultiHandleSliderWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMultiHandleSliderWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiHandleSliderWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultiHandleSliderWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultiHandleSliderWidget, 2723099974);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultiHandleSliderWidget(Z_Construct_UClass_UMultiHandleSliderWidget, &UMultiHandleSliderWidget::StaticClass, TEXT("/Script/MeshWidget"), TEXT("UMultiHandleSliderWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiHandleSliderWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
