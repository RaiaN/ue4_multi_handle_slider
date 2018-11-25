// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FVector2D;
class ULocalPlayer;
class UUserWidget;
class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;
#ifdef MESHWIDGET_MeshWidgetComponent_generated_h
#error "MeshWidgetComponent.generated.h already included, missing '#pragma once' in MeshWidgetComponent.h"
#endif
#define MESHWIDGET_MeshWidgetComponent_generated_h

#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBackgroundColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewBackgroundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBackgroundColor(Z_Param_NewBackgroundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRedraw) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRedraw(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDrawSize) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDrawSize(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDrawSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetDrawSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwnerPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULocalPlayer**)Z_Param__Result=P_THIS->GetOwnerPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwnerPlayer) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_LocalPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwnerPlayer(Z_Param_LocalPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWidget) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWidget(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetMaterialInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRenderTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetRenderTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserWidgetObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=P_THIS->GetUserWidgetObject(); \
		P_NATIVE_END; \
	}


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBackgroundColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewBackgroundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBackgroundColor(Z_Param_NewBackgroundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRedraw) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRedraw(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDrawSize) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDrawSize(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDrawSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetDrawSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwnerPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULocalPlayer**)Z_Param__Result=P_THIS->GetOwnerPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwnerPlayer) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_LocalPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwnerPlayer(Z_Param_LocalPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWidget) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWidget(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetMaterialInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRenderTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetRenderTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserWidgetObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=P_THIS->GetUserWidgetObject(); \
		P_NATIVE_END; \
	}


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshWidgetComponent(); \
	friend struct Z_Construct_UClass_UMeshWidgetComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshWidgetComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshWidget"), NO_API) \
	DECLARE_SERIALIZER(UMeshWidgetComponent)


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUMeshWidgetComponent(); \
	friend struct Z_Construct_UClass_UMeshWidgetComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshWidgetComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshWidget"), NO_API) \
	DECLARE_SERIALIZER(UMeshWidgetComponent)


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshWidgetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshWidgetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshWidgetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshWidgetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshWidgetComponent(UMeshWidgetComponent&&); \
	NO_API UMeshWidgetComponent(const UMeshWidgetComponent&); \
public:


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshWidgetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshWidgetComponent(UMeshWidgetComponent&&); \
	NO_API UMeshWidgetComponent(const UMeshWidgetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshWidgetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshWidgetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshWidgetComponent)


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WidgetClass() { return STRUCT_OFFSET(UMeshWidgetComponent, WidgetClass); } \
	FORCEINLINE static uint32 __PPO__DrawSize() { return STRUCT_OFFSET(UMeshWidgetComponent, DrawSize); } \
	FORCEINLINE static uint32 __PPO__bManuallyRedraw() { return STRUCT_OFFSET(UMeshWidgetComponent, bManuallyRedraw); } \
	FORCEINLINE static uint32 __PPO__bRedrawRequested() { return STRUCT_OFFSET(UMeshWidgetComponent, bRedrawRequested); } \
	FORCEINLINE static uint32 __PPO__RedrawTime() { return STRUCT_OFFSET(UMeshWidgetComponent, RedrawTime); } \
	FORCEINLINE static uint32 __PPO__LastWidgetRenderTime() { return STRUCT_OFFSET(UMeshWidgetComponent, LastWidgetRenderTime); } \
	FORCEINLINE static uint32 __PPO__bWindowFocusable() { return STRUCT_OFFSET(UMeshWidgetComponent, bWindowFocusable); } \
	FORCEINLINE static uint32 __PPO__CurrentDrawSize() { return STRUCT_OFFSET(UMeshWidgetComponent, CurrentDrawSize); } \
	FORCEINLINE static uint32 __PPO__bDrawAtDesiredSize() { return STRUCT_OFFSET(UMeshWidgetComponent, bDrawAtDesiredSize); } \
	FORCEINLINE static uint32 __PPO__Pivot() { return STRUCT_OFFSET(UMeshWidgetComponent, Pivot); } \
	FORCEINLINE static uint32 __PPO__OwnerPlayer() { return STRUCT_OFFSET(UMeshWidgetComponent, OwnerPlayer); } \
	FORCEINLINE static uint32 __PPO__BackgroundColor() { return STRUCT_OFFSET(UMeshWidgetComponent, BackgroundColor); } \
	FORCEINLINE static uint32 __PPO__TintColorAndOpacity() { return STRUCT_OFFSET(UMeshWidgetComponent, TintColorAndOpacity); } \
	FORCEINLINE static uint32 __PPO__OpacityFromTexture() { return STRUCT_OFFSET(UMeshWidgetComponent, OpacityFromTexture); } \
	FORCEINLINE static uint32 __PPO__BlendMode() { return STRUCT_OFFSET(UMeshWidgetComponent, BlendMode); } \
	FORCEINLINE static uint32 __PPO__bIsOpaque_DEPRECATED() { return STRUCT_OFFSET(UMeshWidgetComponent, bIsOpaque_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__bIsTwoSided() { return STRUCT_OFFSET(UMeshWidgetComponent, bIsTwoSided); } \
	FORCEINLINE static uint32 __PPO__ParabolaDistortion() { return STRUCT_OFFSET(UMeshWidgetComponent, ParabolaDistortion); } \
	FORCEINLINE static uint32 __PPO__TickWhenOffscreen() { return STRUCT_OFFSET(UMeshWidgetComponent, TickWhenOffscreen); } \
	FORCEINLINE static uint32 __PPO__Widget() { return STRUCT_OFFSET(UMeshWidgetComponent, Widget); } \
	FORCEINLINE static uint32 __PPO__TranslucentMaterial() { return STRUCT_OFFSET(UMeshWidgetComponent, TranslucentMaterial); } \
	FORCEINLINE static uint32 __PPO__TranslucentMaterial_OneSided() { return STRUCT_OFFSET(UMeshWidgetComponent, TranslucentMaterial_OneSided); } \
	FORCEINLINE static uint32 __PPO__OpaqueMaterial() { return STRUCT_OFFSET(UMeshWidgetComponent, OpaqueMaterial); } \
	FORCEINLINE static uint32 __PPO__OpaqueMaterial_OneSided() { return STRUCT_OFFSET(UMeshWidgetComponent, OpaqueMaterial_OneSided); } \
	FORCEINLINE static uint32 __PPO__MaskedMaterial() { return STRUCT_OFFSET(UMeshWidgetComponent, MaskedMaterial); } \
	FORCEINLINE static uint32 __PPO__MaskedMaterial_OneSided() { return STRUCT_OFFSET(UMeshWidgetComponent, MaskedMaterial_OneSided); } \
	FORCEINLINE static uint32 __PPO__RenderTarget() { return STRUCT_OFFSET(UMeshWidgetComponent, RenderTarget); } \
	FORCEINLINE static uint32 __PPO__MaterialInstance() { return STRUCT_OFFSET(UMeshWidgetComponent, MaterialInstance); } \
	FORCEINLINE static uint32 __PPO__bUseLegacyRotation() { return STRUCT_OFFSET(UMeshWidgetComponent, bUseLegacyRotation); } \
	FORCEINLINE static uint32 __PPO__bAddedToScreen() { return STRUCT_OFFSET(UMeshWidgetComponent, bAddedToScreen); } \
	FORCEINLINE static uint32 __PPO__bEditTimeUsable() { return STRUCT_OFFSET(UMeshWidgetComponent, bEditTimeUsable); }


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_32_PROLOG
#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_RPC_WRAPPERS \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_INCLASS \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_PRIVATE_PROPERTY_OFFSET \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_INCLASS_NO_PURE_DECLS \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MeshWidgetComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
