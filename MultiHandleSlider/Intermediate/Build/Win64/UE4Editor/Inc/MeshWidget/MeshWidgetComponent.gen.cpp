// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshWidget/Public/MeshWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshWidgetComponent() {}
// Cross Module References
	MESHWIDGET_API UClass* Z_Construct_UClass_UMeshWidgetComponent_NoRegister();
	MESHWIDGET_API UClass* Z_Construct_UClass_UMeshWidgetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_MeshWidget();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMeshWidgetComponent_RequestRedraw();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer();
	MESHWIDGET_API UFunction* Z_Construct_UFunction_UMeshWidgetComponent_SetWidget();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetBlendMode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UMeshWidgetComponent::StaticRegisterNativesUMeshWidgetComponent()
	{
		UClass* Class = UMeshWidgetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDrawSize", &UMeshWidgetComponent::execGetDrawSize },
			{ "GetMaterialInstance", &UMeshWidgetComponent::execGetMaterialInstance },
			{ "GetOwnerPlayer", &UMeshWidgetComponent::execGetOwnerPlayer },
			{ "GetRenderTarget", &UMeshWidgetComponent::execGetRenderTarget },
			{ "GetUserWidgetObject", &UMeshWidgetComponent::execGetUserWidgetObject },
			{ "RequestRedraw", &UMeshWidgetComponent::execRequestRedraw },
			{ "SetBackgroundColor", &UMeshWidgetComponent::execSetBackgroundColor },
			{ "SetDrawSize", &UMeshWidgetComponent::execSetDrawSize },
			{ "SetOwnerPlayer", &UMeshWidgetComponent::execSetOwnerPlayer },
			{ "SetWidget", &UMeshWidgetComponent::execSetWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize_Statics
	{
		struct MeshWidgetComponent_eventGetDrawSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MeshWidgetComponent_eventGetDrawSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "@return The draw size of the quad in the world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetComponent, "GetDrawSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(MeshWidgetComponent_eventGetDrawSize_Parms), Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance_Statics
	{
		struct MeshWidgetComponent_eventGetMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MeshWidgetComponent_eventGetMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "@return The dynamic material instance used to render the user widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetComponent, "GetMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MeshWidgetComponent_eventGetMaterialInstance_Parms), Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer_Statics
	{
		struct MeshWidgetComponent_eventGetOwnerPlayer_Parms
		{
			ULocalPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MeshWidgetComponent_eventGetOwnerPlayer_Parms, ReturnValue), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Gets the local player that owns this widget component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetComponent, "GetOwnerPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MeshWidgetComponent_eventGetOwnerPlayer_Parms), Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget_Statics
	{
		struct MeshWidgetComponent_eventGetRenderTarget_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MeshWidgetComponent_eventGetRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "@return The render target to which the user widget is rendered" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetComponent, "GetRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MeshWidgetComponent_eventGetRenderTarget_Parms), Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics
	{
		struct MeshWidgetComponent_eventGetUserWidgetObject_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(MeshWidgetComponent_eventGetUserWidgetObject_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "@return The user widget object displayed by this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetComponent, "GetUserWidgetObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MeshWidgetComponent_eventGetUserWidgetObject_Parms), Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetComponent_RequestRedraw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_RequestRedraw_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Requests that the widget be redrawn." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetComponent_RequestRedraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetComponent, "RequestRedraw", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_RequestRedraw_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_RequestRedraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetComponent_RequestRedraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetComponent_RequestRedraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics
	{
		struct MeshWidgetComponent_eventSetBackgroundColor_Parms
		{
			FLinearColor NewBackgroundColor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewBackgroundColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewBackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MeshWidgetComponent_eventSetBackgroundColor_Parms, NewBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Sets the background color and opacityscale for this widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetComponent, "SetBackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MeshWidgetComponent_eventSetBackgroundColor_Parms), Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize_Statics
	{
		struct MeshWidgetComponent_eventSetDrawSize_Parms
		{
			FVector2D Size;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize_Statics::NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Struct, "Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MeshWidgetComponent_eventSetDrawSize_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Sets the draw size of the quad in the world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetComponent, "SetDrawSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MeshWidgetComponent_eventSetDrawSize_Parms), Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer_Statics
	{
		struct MeshWidgetComponent_eventSetOwnerPlayer_Parms
		{
			ULocalPlayer* LocalPlayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer_Statics::NewProp_LocalPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "LocalPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MeshWidgetComponent_eventSetOwnerPlayer_Parms, LocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer_Statics::NewProp_LocalPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Sets the local player that owns this widget component.  Setting the owning player controls\nwhich player's viewport the widget appears on in a split screen scenario.  Additionally it\nforwards the owning player to the actual UserWidget that is spawned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetComponent, "SetOwnerPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MeshWidgetComponent_eventSetOwnerPlayer_Parms), Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics
	{
		struct MeshWidgetComponent_eventSetWidget_Parms
		{
			UUserWidget* Widget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MeshWidgetComponent_eventSetWidget_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Sets the widget to use directly. This function will keep track of the widget till the next time it's called\n    with either a newer widget or a nullptr" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshWidgetComponent, "SetWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(MeshWidgetComponent_eventSetWidget_Parms), Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshWidgetComponent_SetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeshWidgetComponent_SetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshWidgetComponent_NoRegister()
	{
		return UMeshWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMeshWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditTimeUsable_MetaData[];
#endif
		static void NewProp_bEditTimeUsable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditTimeUsable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddedToScreen_MetaData[];
#endif
		static void NewProp_bAddedToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddedToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyRotation_MetaData[];
#endif
		static void NewProp_bUseLegacyRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskedMaterial_OneSided_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskedMaterial_OneSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpaqueMaterial_OneSided_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueMaterial_OneSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpaqueMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentMaterial_OneSided_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentMaterial_OneSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickWhenOffscreen_MetaData[];
#endif
		static void NewProp_TickWhenOffscreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TickWhenOffscreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParabolaDistortion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParabolaDistortion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTwoSided_MetaData[];
#endif
		static void NewProp_bIsTwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOpaque_MetaData[];
#endif
		static void NewProp_bIsOpaque_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOpaque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityFromTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityFromTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TintColorAndOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TintColorAndOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawAtDesiredSize_MetaData[];
#endif
		static void NewProp_bDrawAtDesiredSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawAtDesiredSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDrawSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentDrawSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWindowFocusable_MetaData[];
#endif
		static void NewProp_bWindowFocusable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWindowFocusable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastWidgetRenderTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastWidgetRenderTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedrawTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RedrawTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRedrawRequested_MetaData[];
#endif
		static void NewProp_bRedrawRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRedrawRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManuallyRedraw_MetaData[];
#endif
		static void NewProp_bManuallyRedraw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManuallyRedraw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshWidgetComponent_GetDrawSize, "GetDrawSize" }, // 1544000963
		{ &Z_Construct_UFunction_UMeshWidgetComponent_GetMaterialInstance, "GetMaterialInstance" }, // 299023677
		{ &Z_Construct_UFunction_UMeshWidgetComponent_GetOwnerPlayer, "GetOwnerPlayer" }, // 2552911801
		{ &Z_Construct_UFunction_UMeshWidgetComponent_GetRenderTarget, "GetRenderTarget" }, // 133498247
		{ &Z_Construct_UFunction_UMeshWidgetComponent_GetUserWidgetObject, "GetUserWidgetObject" }, // 3351477877
		{ &Z_Construct_UFunction_UMeshWidgetComponent_RequestRedraw, "RequestRedraw" }, // 396425770
		{ &Z_Construct_UFunction_UMeshWidgetComponent_SetBackgroundColor, "SetBackgroundColor" }, // 322137646
		{ &Z_Construct_UFunction_UMeshWidgetComponent_SetDrawSize, "SetDrawSize" }, // 2391313046
		{ &Z_Construct_UFunction_UMeshWidgetComponent_SetOwnerPlayer, "SetOwnerPlayer" }, // 208727551
		{ &Z_Construct_UFunction_UMeshWidgetComponent_SetWidget, "SetWidget" }, // 4294867556
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Experimental" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Object Activation Components|Activation Trigger" },
		{ "IncludePath", "MeshWidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Beware! This feature is experimental and may be substantially changed or removed in future releases.\nA 3D instance of a Widget Blueprint that can be interacted with in the world.\n\nSlateUI [Texture]\nBackColor [Vector]\nTintColorAndOpacity [Vector]\nOpacityFromTexture [Scalar]\nParabolaDistortion [Scalar]" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bEditTimeUsable_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Allows the widget component to be used at editor time.  For use in the VR-Editor." },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bEditTimeUsable_SetBit(void* Obj)
	{
		((UMeshWidgetComponent*)Obj)->bEditTimeUsable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bEditTimeUsable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEditTimeUsable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMeshWidgetComponent), &Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bEditTimeUsable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bEditTimeUsable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bEditTimeUsable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bAddedToScreen_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bAddedToScreen_SetBit(void* Obj)
	{
		((UMeshWidgetComponent*)Obj)->bAddedToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bAddedToScreen = { UE4CodeGen_Private::EPropertyClass::Bool, "bAddedToScreen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMeshWidgetComponent), &Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bAddedToScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bAddedToScreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bAddedToScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bUseLegacyRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bUseLegacyRotation_SetBit(void* Obj)
	{
		((UMeshWidgetComponent*)Obj)->bUseLegacyRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bUseLegacyRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLegacyRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMeshWidgetComponent), &Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bUseLegacyRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bUseLegacyRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bUseLegacyRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The dynamic instance of the material that the render target is attached to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000202000, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The target to which the user widget is rendered" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_RenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000202000, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_RenderTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The material instance for masked, one-sided widget components." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided = { UE4CodeGen_Private::EPropertyClass::Object, "MaskedMaterial_OneSided", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, MaskedMaterial_OneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaskedMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The material instance for masked widget components." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaskedMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "MaskedMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, MaskedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaskedMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaskedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The material instance for opaque, one-sided widget components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided = { UE4CodeGen_Private::EPropertyClass::Object, "OpaqueMaterial_OneSided", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, OpaqueMaterial_OneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpaqueMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The material instance for opaque widget components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpaqueMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "OpaqueMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, OpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpaqueMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpaqueMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The material instance for translucent, one-sided widget components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided = { UE4CodeGen_Private::EPropertyClass::Object, "TranslucentMaterial_OneSided", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, TranslucentMaterial_OneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TranslucentMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The material instance for translucent widget components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TranslucentMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "TranslucentMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, TranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TranslucentMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The User Widget object displayed and managed by this component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000282008, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_Widget_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TickWhenOffscreen_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Should the component tick the widget when it's off screen?" },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TickWhenOffscreen_SetBit(void* Obj)
	{
		((UMeshWidgetComponent*)Obj)->TickWhenOffscreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TickWhenOffscreen = { UE4CodeGen_Private::EPropertyClass::Bool, "TickWhenOffscreen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMeshWidgetComponent), &Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TickWhenOffscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TickWhenOffscreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TickWhenOffscreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_ParabolaDistortion_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "When enabled, distorts the UI along a parabola shape giving the UI the appearance\nthat it's on a curved surface in front of the users face.  This only works for UI\nrendered to a render target." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_ParabolaDistortion = { UE4CodeGen_Private::EPropertyClass::Float, "ParabolaDistortion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, ParabolaDistortion), METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_ParabolaDistortion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_ParabolaDistortion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsTwoSided_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Is the component visible from behind?" },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsTwoSided_SetBit(void* Obj)
	{
		((UMeshWidgetComponent*)Obj)->bIsTwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsTwoSided = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTwoSided", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMeshWidgetComponent), &Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsTwoSided_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsTwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsOpaque_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsOpaque_SetBit(void* Obj)
	{
		((UMeshWidgetComponent*)Obj)->bIsOpaque_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsOpaque = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsOpaque", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMeshWidgetComponent), &Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsOpaque_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsOpaque_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsOpaque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The blend mode for the widget." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_BlendMode = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, BlendMode), Z_Construct_UEnum_UMG_EWidgetBlendMode, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_BlendMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_BlendMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_BlendMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpacityFromTexture_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpacityFromTexture = { UE4CodeGen_Private::EPropertyClass::Float, "OpacityFromTexture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, OpacityFromTexture), METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpacityFromTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpacityFromTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TintColorAndOpacity_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Tint color and opacity for this component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TintColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "TintColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, TintColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TintColorAndOpacity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TintColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The background color of the component" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_BackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_BackgroundColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OwnerPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The owner player for a widget component, if this widget is drawn on the screen, this controls\nwhat player's screen it appears on for split screen, if not set, users player 0." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OwnerPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, OwnerPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OwnerPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OwnerPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_Pivot_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The Alignment/Pivot point that the widget is placed at relative to the position." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_Pivot = { UE4CodeGen_Private::EPropertyClass::Struct, "Pivot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, Pivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_Pivot_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_Pivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Causes the render target to automatically match the desired size.\n\nWARNING: If you change this every frame, it will be very expensive.  If you need\n   that effect, you should keep the outer widget's sized locked and dynamically\n   scale or resize some inner widget." },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit(void* Obj)
	{
		((UMeshWidgetComponent*)Obj)->bDrawAtDesiredSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bDrawAtDesiredSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawAtDesiredSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMeshWidgetComponent), &Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_CurrentDrawSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The actual draw size, this changes based on DrawSize - or the desired size of the widget if\nbDrawAtDesiredSize is true." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_CurrentDrawSize = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentDrawSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, CurrentDrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_CurrentDrawSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_CurrentDrawSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bWindowFocusable_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Is the virtual window created to host the widget focusable?" },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bWindowFocusable_SetBit(void* Obj)
	{
		((UMeshWidgetComponent*)Obj)->bWindowFocusable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bWindowFocusable = { UE4CodeGen_Private::EPropertyClass::Bool, "bWindowFocusable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMeshWidgetComponent), &Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bWindowFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bWindowFocusable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bWindowFocusable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_LastWidgetRenderTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "What was the last time we rendered the widget?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_LastWidgetRenderTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastWidgetRenderTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, LastWidgetRenderTime), METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_LastWidgetRenderTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_LastWidgetRenderTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_RedrawTime_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The time in between draws, if 0 - we would redraw every frame.  If 1, we would redraw every second.\nThis will work with bManuallyRedraw as well.  So you can say, manually redraw, but only redraw at this\nmaximum rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_RedrawTime = { UE4CodeGen_Private::EPropertyClass::Float, "RedrawTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, RedrawTime), METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_RedrawTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_RedrawTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bRedrawRequested_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Has anyone requested we redraw?" },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bRedrawRequested_SetBit(void* Obj)
	{
		((UMeshWidgetComponent*)Obj)->bRedrawRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bRedrawRequested = { UE4CodeGen_Private::EPropertyClass::Bool, "bRedrawRequested", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMeshWidgetComponent), &Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bRedrawRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bRedrawRequested_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bRedrawRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bManuallyRedraw_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "Should we wait to be told to redraw to actually draw?" },
	};
#endif
	void Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bManuallyRedraw_SetBit(void* Obj)
	{
		((UMeshWidgetComponent*)Obj)->bManuallyRedraw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bManuallyRedraw = { UE4CodeGen_Private::EPropertyClass::Bool, "bManuallyRedraw", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMeshWidgetComponent), &Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bManuallyRedraw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bManuallyRedraw_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bManuallyRedraw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_DrawSize_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The size of the displayed quad." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_DrawSize = { UE4CodeGen_Private::EPropertyClass::Struct, "DrawSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, DrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_DrawSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_DrawSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/MeshWidgetComponent.h" },
		{ "ToolTip", "The class of User Widget to create and display an instance of" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_WidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "WidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UMeshWidgetComponent, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_WidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_WidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bEditTimeUsable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bAddedToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bUseLegacyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_RenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_MaskedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpaqueMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TranslucentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_Widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TickWhenOffscreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_ParabolaDistortion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsTwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bIsOpaque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_BlendMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OpacityFromTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_TintColorAndOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_BackgroundColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_OwnerPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_Pivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bDrawAtDesiredSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_CurrentDrawSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bWindowFocusable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_LastWidgetRenderTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_RedrawTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bRedrawRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_bManuallyRedraw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_DrawSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshWidgetComponent_Statics::NewProp_WidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeshWidgetComponent_Statics::ClassParams = {
		&UMeshWidgetComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMeshWidgetComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMeshWidgetComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMeshWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeshWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshWidgetComponent, 1432071440);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshWidgetComponent(Z_Construct_UClass_UMeshWidgetComponent, &UMeshWidgetComponent::StaticClass, TEXT("/Script/MeshWidget"), TEXT("UMeshWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
