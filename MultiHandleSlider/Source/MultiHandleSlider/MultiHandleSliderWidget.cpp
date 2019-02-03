#include "MultiHandleSliderWidget.h"
#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "Utils.h"

DEFINE_LOG_CATEGORY(MultiHandleSliderWidget);

UMultiHandleSliderWidget::UMultiHandleSliderWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    SliderBarColor = FLinearColor(0, 0, 0, 1);

    MinAngle = -100.0f;
    MaxAngle = 100.0f;
}

void UMultiHandleSliderWidget::SetUpPlayerActor(AActor* InPlayerActor)
{
    PlayerActor = InPlayerActor;
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
		
        UpdateVisibility();
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
	
    UpdateVisibility();
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
}


void UMultiHandleSliderWidget::RemoveAllTargets()
{
	TargetActors.Empty();
	TargetLocations.Empty();
	MultiHandleSlider->RemoveAllObjectives();
}

bool UMultiHandleSliderWidget::ShouldBeVisible_Implementation() const
{
    return TargetActors.Num() > 0 || TargetLocations.Num() > 0;
}

int32 UMultiHandleSliderWidget::CountTargetTypes(const FName& TargetType) const
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

void UMultiHandleSliderWidget::UpdateVisibility()
{
    if (ShouldBeVisible())
    {
        SetVisibility(ESlateVisibility::SelfHitTestInvisible);
    }
    else
    {
        SetVisibility(ESlateVisibility::Hidden);
    }
}

float UMultiHandleSliderWidget::GetHandlePosition(const FVector& TargetPosition) const
{
	if (!IsValid(PlayerActor))
	{
		return 0.0f;
	}

	const FVector PlayerControllerForwardVector = UtilityFunctions::GetForwardVectorFromRotator(PlayerActor->GetInstigatorController()->GetControlRotation());
	const float Angle = UtilityFunctions::GetAngleBetweenVectors((TargetPosition - PlayerActor->GetActorLocation()).GetSafeNormal(), PlayerControllerForwardVector);
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
	MultiHandleSlider->SetTargetTypesDataTable(TargetTypesDataTable);
}

void UMultiHandleSliderWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	MultiHandleSlider.Reset();
}