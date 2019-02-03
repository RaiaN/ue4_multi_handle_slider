#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Misc/Attribute.h"
#include "Input/Reply.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Styling/SlateColor.h"
#include "Styling/SlateTypes.h"
#include "Styling/CoreStyle.h"
#include "Styling/SlateWidgetStyleAsset.h"
#include "Framework/SlateDelegates.h"
#include "Widgets/SLeafWidget.h"
#include "MultiHandleSliderStructures.h"
#include "REndering/DrawElements.h" 

class FPaintArgs;
class FSlateWindowElementList;

class SMultiHandleSlider: public SLeafWidget
{

public:
	SLATE_BEGIN_ARGS(SMultiHandleSlider)
		: _IndentHandle(true)
		, _SliderBarColor(FLinearColor::White)
		, _Style(&FCoreStyle::Get().GetWidgetStyle<FSliderStyle>("Slider"))
	{ }

		/** Whether the slidable area should be indented to fit the handle. */
		SLATE_ATTRIBUTE(bool, IndentHandle)

		/** The color to draw the slider bar in. */
		SLATE_ATTRIBUTE(FSlateColor, SliderBarColor)

		/** The style used to draw the slider. */
		SLATE_STYLE_ARGUMENT(FSliderStyle, Style)

	SLATE_END_ARGS()

	/**
	* Construct the widget.
	*
	* @param InDeclaration A declaration from which to construct the widget.
	*/
	void Construct(const SMultiHandleSlider::FArguments& InDeclaration);

	/** Set the IndentHandle attribute */
	void SetIndentHandle(const TAttribute<bool>& InIndentHandle);

	/** Set the SliderBarColor attribute */
	void SetSliderBarColor(FSlateColor InSliderBarColor);

	void SetTargetTypesDataTable(UDataTable* InTargetTypesDataTable);

public:

	// SWidget overrides

	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
	virtual FVector2D ComputeDesiredSize(float) const override;

	void AddObjective(const FString& TargetID, const FName& TargetType);
	void UpdateObjectiveHandlePosition(const FString& TargetID, float HandlePosition);
	void RemoveObjective(const FString& TargetID);
	void RemoveAllObjectives();
    void ShowObjective(const FString& TargetID, bool bShow);
    void ShowTargetTypes(const TArray<FName>& TargetTypes, bool bShow);
    void ClearHiddenTargetTypes();

	bool HasObjectives() const;

protected:

	// Holds the style passed to the widget upon construction.
	const FSliderStyle* Style;

	// Holds a flag indicating whether the slideable area should be indented to fit the handle.
	TAttribute<bool> IndentHandle;

	// Holds the color of the slider bar.
	TAttribute<FSlateColor> SliderBarColor;

private:
    UPROPERTY(Transient)
    UDataTable* TargetTypesDataTable;

	TMap<FString, FHandleInfo> HandlesMap;

    TArray<FName> HiddenTargetTypes;
};