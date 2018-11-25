// Copyright MultiHandleSlider by Peter Leontev

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "UserWidget.h"
#include "UObject/ObjectMacros.h"
#include "Fonts/SlateFontInfo.h"
#include "Layout/Margin.h"
#include "Styling/SlateColor.h"
#include "Styling/SlateTypes.h"
#include "Widgets/SWidget.h"
#include "Widgets/Input/SComboBox.h"
#include "SMultiHandleSlider.h"
#include "MultiHandleSliderWidget.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(MultiHandleSliderWidget, Log, All);


UCLASS(meta = (DisplayName = "Multi Handle Slider"))
class UMultiHandleSliderWidget: public UWidget
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
	void SetUpPlayerPawn(AActor* InPlayerPawn);

	UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
	void AddActorAsTarget(const FString& TargetID, const FName& TargetType, AActor* TargetActor);

	UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
	void AddLocationAsTarget(const FString& TargetID, const FName& TargetType, const FVector& TargetLocation);

	UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
	void RemoveTarget(const FString& TargetID);

	UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
	void RemoveAllTargets();

	UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
	int CountTargetTypes(const FName& TargetType);

	UFUNCTION(BlueprintCallable)
	void Tick();

	virtual void SynchronizeProperties() override;
	void ReleaseSlateResources(bool bReleaseChildren);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Style", meta = (DisplayName = "Style"))
	FSliderStyle WidgetStyle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
	FLinearColor SliderBarColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
	UDataTable* TargetTypesDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
	float MinAngle = -100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
	float MaxAngle = 100.0f;
	
protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;

protected:
	TSharedPtr< SMultiHandleSlider > MultiHandleSlider;

private:
    float GetHandlePosition(const FVector& TargetPosition);

private:
    UPROPERTY(Transient)
    AActor* PlayerPawn;

    TMap<FString, FTargetActorInfo> TargetActors;

    TMap<FString, FTargetLocationInfo> TargetLocations;
};