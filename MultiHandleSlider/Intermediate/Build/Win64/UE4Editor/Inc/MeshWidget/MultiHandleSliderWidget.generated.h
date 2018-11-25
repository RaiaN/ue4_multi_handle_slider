// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
#ifdef MESHWIDGET_MultiHandleSliderWidget_generated_h
#error "MultiHandleSliderWidget.generated.h already included, missing '#pragma once' in MultiHandleSliderWidget.h"
#endif
#define MESHWIDGET_MultiHandleSliderWidget_generated_h

#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCountTargetTypes) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_TargetType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->CountTargetTypes(Z_Param_Out_TargetType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTarget) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTarget(Z_Param_TargetID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddLocationAsTarget) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetID); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_TargetType); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddLocationAsTarget(Z_Param_TargetID,Z_Param_Out_TargetType,Z_Param_Out_TargetLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActorAsTarget) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetID); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_TargetType); \
		P_GET_OBJECT(AActor,Z_Param_TargetActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddActorAsTarget(Z_Param_TargetID,Z_Param_Out_TargetType,Z_Param_TargetActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpPlayerPawn) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InPlayerPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpPlayerPawn(Z_Param_InPlayerPawn); \
		P_NATIVE_END; \
	}


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Tick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCountTargetTypes) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_TargetType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->CountTargetTypes(Z_Param_Out_TargetType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllTargets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllTargets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTarget) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveTarget(Z_Param_TargetID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddLocationAsTarget) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetID); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_TargetType); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddLocationAsTarget(Z_Param_TargetID,Z_Param_Out_TargetType,Z_Param_Out_TargetLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddActorAsTarget) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TargetID); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_TargetType); \
		P_GET_OBJECT(AActor,Z_Param_TargetActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddActorAsTarget(Z_Param_TargetID,Z_Param_Out_TargetType,Z_Param_TargetActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpPlayerPawn) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InPlayerPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpPlayerPawn(Z_Param_InPlayerPawn); \
		P_NATIVE_END; \
	}


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiHandleSliderWidget(); \
	friend struct Z_Construct_UClass_UMultiHandleSliderWidget_Statics; \
public: \
	DECLARE_CLASS(UMultiHandleSliderWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshWidget"), NO_API) \
	DECLARE_SERIALIZER(UMultiHandleSliderWidget)


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMultiHandleSliderWidget(); \
	friend struct Z_Construct_UClass_UMultiHandleSliderWidget_Statics; \
public: \
	DECLARE_CLASS(UMultiHandleSliderWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MeshWidget"), NO_API) \
	DECLARE_SERIALIZER(UMultiHandleSliderWidget)


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiHandleSliderWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiHandleSliderWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiHandleSliderWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiHandleSliderWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiHandleSliderWidget(UMultiHandleSliderWidget&&); \
	NO_API UMultiHandleSliderWidget(const UMultiHandleSliderWidget&); \
public:


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiHandleSliderWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiHandleSliderWidget(UMultiHandleSliderWidget&&); \
	NO_API UMultiHandleSliderWidget(const UMultiHandleSliderWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiHandleSliderWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiHandleSliderWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiHandleSliderWidget)


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerPawn() { return STRUCT_OFFSET(UMultiHandleSliderWidget, PlayerPawn); }


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_19_PROLOG
#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_RPC_WRAPPERS \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_INCLASS \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_INCLASS_NO_PURE_DECLS \
	MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MultiHandleSliderWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MeshWidgets_Plugins_MeshWidget_Source_MeshWidget_Public_UMG_MultiHandleSliderWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
