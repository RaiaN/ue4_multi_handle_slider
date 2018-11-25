// Copyright MultiHandleSlider by Peter Leontev

#pragma once

#include "MultiHandleSliderWidget.h"
#include "Utils.h"

DEFINE_LOG_CATEGORY(MultiHandleSliderWidget);

UMultiHandleSliderWidget::UMultiHandleSliderWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{}

void UMultiHandleSliderWidget::SetUpPlayerPawn(AActor* InPlayerPawn)
{
	PlayerPawn = InPlayerPawn;
}

void UMultiHandleSliderWidget::AddActorAsTarget(const FString& TargetID, const FName& TargetType, AActor* TargetActor)
{
	if (TargetActor->IsValidLowLevel())
	{
		FTargetActorInfo ActorInfo;
		ActorInfo.TargetID = TargetID;
		ActorInfo.TargetActor = TargetActor;
		ActorInfo.TargetType = TargetType;
		TargetActors.Add(TargetID, ActorInfo);

		MultiHandleSlider->AddObjective(TargetID, TargetType);
		SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}	
}

void UMultiHandleSliderWidget::AddLocationAsTarget(const FString& TargetID, const FName& TargetType, const FVector& TargetLocation)
{
	FTargetLocationInfo LocationInfo;
	LocationInfo.TargetID = TargetID;
	LocationInfo.TargetLocation = TargetLocation;
	LocationInfo.TargetType = TargetType;
	TargetLocations.Add(TargetID, LocationInfo);

	MultiHandleSlider->AddObjective(TargetID, TargetType);
	SetVisibility(ESlateVisibility::SelfHitTestInvisible);
}

void UMultiHandleSliderWidget::RemoveTarget(const FString& TargetID)
{
	if (TargetActors.Contains(TargetID))
	{
		TargetActors.Remove(TargetID);
	}
	if (TargetLocations.Contains(TargetID))
	{
		TargetLocations.Remove(TargetID);
	}
	MultiHandleSlider->RemoveObjective(TargetID);

	if (TargetActors.Num() + TargetLocations.Num() == 0)
	{
		SetVisibility(ESlateVisibility::Hidden);
	}
}


void UMultiHandleSliderWidget::RemoveAllTargets()
{
	TargetActors.Reset();
	TargetLocations.Reset();
	MultiHandleSlider->RemoveAllObjectives();
}

UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
int UMultiHandleSliderWidget::CountTargetTypes(const FName& TargetType)
{
	int32 ResultCnt = 0;

	TArray<FTargetActorInfo> TargetActorsInfo;
	TargetActors.GenerateValueArray(TargetActorsInfo);
	for (const FTargetActorInfo& TargetActorInfo : TargetActorsInfo)
	{
		ResultCnt += TargetActorInfo.TargetType == TargetType;
	}

	TArray<FTargetLocationInfo> TargetLocationsInfo;
	TargetLocations.GenerateValueArray(TargetLocationsInfo);
	for (const FTargetLocationInfo& TargetLocationInfo : TargetLocationsInfo)
	{
		ResultCnt += TargetLocationInfo.TargetType == TargetType;
	}

	return ResultCnt;
}

void UMultiHandleSliderWidget::Tick()
{
	TArray<FTargetActorInfo> TargetActorsInfo;
	TargetActors.GenerateValueArray(TargetActorsInfo);
	for (const FTargetActorInfo& TargetActorInfo : TargetActorsInfo)
	{
		if (IsValid(TargetActorInfo.TargetActor))
		{
			float HandlePosition = GetHandlePosition(TargetActorInfo.TargetActor->GetActorLocation());
			MultiHandleSlider->UpdateObjectiveHandlePosition(TargetActorInfo.TargetID, HandlePosition);
		}
	}

	TArray<FTargetLocationInfo> TargetLocationsInfo;
	TargetLocations.GenerateValueArray(TargetLocationsInfo);
	for (const FTargetLocationInfo& TargetLocationInfo : TargetLocationsInfo)
	{
		float HandlePosition = GetHandlePosition(TargetLocationInfo.TargetLocation);
		MultiHandleSlider->UpdateObjectiveHandlePosition(TargetLocationInfo.TargetID, HandlePosition);
	}
}

float UMultiHandleSliderWidget::GetHandlePosition(const FVector& TargetPosition)
{
	if (!IsValid(PlayerPawn))
	{
		return 0.0f;
	}

	FVector PlayerControllerForwardVector = UtilityFunctions::GetForwardVectorFromRotator(PlayerPawn->GetInstigatorController()->GetControlRotation());
	float Angle = UtilityFunctions::GetAngleBetweenVectors((TargetPosition - PlayerPawn->GetActorLocation()).GetSafeNormal(), PlayerControllerForwardVector);
	return FMath::GetMappedRangeValueClamped(FVector2D(MaxAngle, MinAngle), FVector2D(0, 1), Angle);
}

TSharedRef<SWidget> UMultiHandleSliderWidget::RebuildWidget()
{
	MultiHandleSlider = SNew(SMultiHandleSlider).Style(&WidgetStyle);
	return MultiHandleSlider.ToSharedRef();
}

void UMultiHandleSliderWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	MultiHandleSlider->SetSliderBarColor(SliderBarColor);
	MultiHandleSlider->SetSliderHandleColor(SliderHandleColor);
	MultiHandleSlider->SetTargetTypesDataTable(TargetTypesDataTable);
}

void UMultiHandleSliderWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	MultiHandleSlider.Reset();
}