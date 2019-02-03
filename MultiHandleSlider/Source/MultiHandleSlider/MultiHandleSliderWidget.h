#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "UserWidget.h"
#include "Containers/Map.h"
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


class AActor;
class UDataTable;


UCLASS(meta = (DisplayName = "Multi Handle Slider"))
class UMultiHandleSliderWidget: public UWidget
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
	void SetUpPlayerActor(AActor* InPlayerActor);

	UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
	void AddActorAsTarget(const FString& TargetID, const FName& TargetType, AActor* TargetActor);

	UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
	void AddLocationAsTarget(const FString& TargetID, const FName& TargetType, const FVector& TargetLocation);

	UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
	void RemoveTarget(const FString& TargetID);

	UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
	void RemoveAllTargets();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    bool ShouldBeVisible() const;

	UFUNCTION(BlueprintCallable, Category = "Multi Handle Slider")
	int32 CountTargetTypes(const FName& TargetType) const;

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
	float MinAngle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
	float MaxAngle;
	
protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;

protected:
	TSharedPtr< SMultiHandleSlider > MultiHandleSlider;

private:
    void UpdateVisibility();

    float GetHandlePosition(const FVector& TargetPosition) const;

private:
    UPROPERTY(Transient)
    AActor* PlayerActor;

    UPROPERTY(Transient)
    TMap<FString, FTargetActorInfo> TargetActors;

    UPROPERTY(Transient)
    TMap<FString, FTargetLocationInfo> TargetLocations;
};