// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshWidgetComponent;
struct FHitResult;
class UWidgetComponent;
struct FKey;
#ifdef MESHWIDGET_MeshWidgetInteractionComponent_generated_h
#error "MeshWidgetInteractionComponent.generated.h already included, missing '#pragma once' in MeshWidgetInteractionComponent.h"
#endif
#define MESHWIDGET_MeshWidgetInteractionComponent_generated_h

#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_42_DELEGATE \
struct _Script_MeshWidget_eventOnHoveredMeshWidgetChanged_Parms \
{ \
	UMeshWidgetComponent* MeshWidgetComponent; \
	UMeshWidgetComponent* PreviousMeshWidgetComponent; \
}; \
static inline void FOnHoveredMeshWidgetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHoveredMeshWidgetChanged, UMeshWidgetComponent* MeshWidgetComponent, UMeshWidgetComponent* PreviousMeshWidgetComponent) \
{ \
	_Script_MeshWidget_eventOnHoveredMeshWidgetChanged_Parms Parms; \
	Parms.MeshWidgetComponent=MeshWidgetComponent; \
	Parms.PreviousMeshWidgetComponent=PreviousMeshWidgetComponent; \
	OnHoveredMeshWidgetChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomHitResult) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomHitResult(Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastHitResult) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=P_THIS->GetLastHitResult(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverHitTestVisibleWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverHitTestVisibleWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverFocusableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverFocusableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverInteractableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverInteractableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoveredMeshWidgetComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMeshWidgetComponent**)Z_Param__Result=P_THIS->GetHoveredMeshWidgetComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoveredWidgetComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidgetComponent**)Z_Param__Result=P_THIS->GetHoveredWidgetComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrollWheel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScrollDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollWheel(Z_Param_ScrollDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendKeyChar) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Characters); \
		P_GET_UBOOL(Z_Param_bRepeat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SendKeyChar(Z_Param_Characters,Z_Param_bRepeat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPressAndReleaseKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PressAndReleaseKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReleaseKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPressKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_bRepeat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PressKey(Z_Param_Key,Z_Param_bRepeat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleasePointerKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleasePointerKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPressPointerKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PressPointerKey(Z_Param_Key); \
		P_NATIVE_END; \
	}


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomHitResult) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCustomHitResult(Z_Param_Out_HitResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastHitResult) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=P_THIS->GetLastHitResult(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverHitTestVisibleWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverHitTestVisibleWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverFocusableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverFocusableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOverInteractableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsOverInteractableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoveredMeshWidgetComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMeshWidgetComponent**)Z_Param__Result=P_THIS->GetHoveredMeshWidgetComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoveredWidgetComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWidgetComponent**)Z_Param__Result=P_THIS->GetHoveredWidgetComponent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrollWheel) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_ScrollDelta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrollWheel(Z_Param_ScrollDelta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendKeyChar) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Characters); \
		P_GET_UBOOL(Z_Param_bRepeat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SendKeyChar(Z_Param_Characters,Z_Param_bRepeat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPressAndReleaseKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PressAndReleaseKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReleaseKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPressKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_bRepeat); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PressKey(Z_Param_Key,Z_Param_bRepeat); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleasePointerKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleasePointerKey(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPressPointerKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PressPointerKey(Z_Param_Key); \
		P_NATIVE_END; \
	}


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMeshWidgetInteractionComponent(); \
	friend struct Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshWidgetInteractionComponent, USceneComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshWidget"), NO_API) \
	DECLARE_SERIALIZER(UMeshWidgetInteractionComponent)


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUMeshWidgetInteractionComponent(); \
	friend struct Z_Construct_UClass_UMeshWidgetInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UMeshWidgetInteractionComponent, USceneComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshWidget"), NO_API) \
	DECLARE_SERIALIZER(UMeshWidgetInteractionComponent)


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMeshWidgetInteractionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshWidgetInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshWidgetInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshWidgetInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshWidgetInteractionComponent(UMeshWidgetInteractionComponent&&); \
	NO_API UMeshWidgetInteractionComponent(const UMeshWidgetInteractionComponent&); \
public:


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMeshWidgetInteractionComponent(UMeshWidgetInteractionComponent&&); \
	NO_API UMeshWidgetInteractionComponent(const UMeshWidgetInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMeshWidgetInteractionComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMeshWidgetInteractionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMeshWidgetInteractionComponent)


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CustomHitResult() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, CustomHitResult); } \
	FORCEINLINE static uint32 __PPO__LocalHitLocation() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, LocalHitLocation); } \
	FORCEINLINE static uint32 __PPO__LastLocalHitLocation() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, LastLocalHitLocation); } \
	FORCEINLINE static uint32 __PPO__HoveredWidgetComponent() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, HoveredWidgetComponent); } \
	FORCEINLINE static uint32 __PPO__HoveredMeshWidgetComponent() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, HoveredMeshWidgetComponent); } \
	FORCEINLINE static uint32 __PPO__LastHitResult() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, LastHitResult); } \
	FORCEINLINE static uint32 __PPO__bIsHoveredWidgetInteractable() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, bIsHoveredWidgetInteractable); } \
	FORCEINLINE static uint32 __PPO__bIsHoveredWidgetFocusable() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, bIsHoveredWidgetFocusable); } \
	FORCEINLINE static uint32 __PPO__bIsHoveredWidgetHitTestVisible() { return STRUCT_OFFSET(UMeshWidgetInteractionComponent, bIsHoveredWidgetHitTestVisible); }


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_51_PROLOG
#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_PRIVATE_PROPERTY_OFFSET \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_RPC_WRAPPERS \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_INCLASS \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_PRIVATE_PROPERTY_OFFSET \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_INCLASS_NO_PURE_DECLS \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_MeshWidgetInteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
