#include "SMultiHandleSlider.h"
#include "Rendering/DrawElements.h"


void SMultiHandleSlider::Construct(const SMultiHandleSlider::FArguments& InDeclaration)
{
	check(InDeclaration._Style);

	Style = InDeclaration._Style;

	IndentHandle = InDeclaration._IndentHandle;
	SliderBarColor = InDeclaration._SliderBarColor;
}

int32 SMultiHandleSlider::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
    if (!IsValid(TargetTypesDataTable))
    {
        return 0;
    }

	const float AllottedWidth = AllottedGeometry.GetLocalSize().X;
	const float AllottedHeight = AllottedGeometry.GetLocalSize().Y;

	FVector2D HandleTopLeftPoint;
	FVector2D SliderStartPoint;
	FVector2D SliderEndPoint;

	// calculate slider geometry as if it's a horizontal slider (we'll rotate it later if it's vertical)
	const FVector2D HandleSize = Style->NormalThumbImage.ImageSize;
	const FVector2D HalfHandleSize = 0.5f * HandleSize;
	const float Indentation = IndentHandle.Get() ? HandleSize.X : 0.0f;

	const float SliderLength = AllottedWidth - (Indentation + HandleSize.X);
	const float SliderY = 0.5f * AllottedHeight;

	const bool bEnabled = ShouldBeEnabled(bParentEnabled);
	const ESlateDrawEffect DrawEffects = bEnabled ? ESlateDrawEffect::None : ESlateDrawEffect::DisabledEffect;

	SliderStartPoint = FVector2D(HalfHandleSize.X, SliderY);
	SliderEndPoint = FVector2D(AllottedWidth - HalfHandleSize.X, SliderY);

	auto BarTopLeft = FVector2D(SliderStartPoint.X, SliderStartPoint.Y - Style->BarThickness * 0.5f);
	auto BarSize = FVector2D(SliderEndPoint.X - SliderStartPoint.X, Style->BarThickness);

	FGeometry SliderGeometry = AllottedGeometry;

	// draw slider bar
	FSlateDrawElement::MakeBox(
		OutDrawElements,
		LayerId,
		SliderGeometry.ToPaintGeometry(BarSize, FSlateLayoutTransform(BarTopLeft)),
		&Style->NormalBarImage,
		DrawEffects,
		SliderBarColor.Get().GetColor(InWidgetStyle) * InWidgetStyle.GetColorAndOpacityTint()
	);

	TArray<FHandleInfo> Values;
	HandlesMap.GenerateValueArray(Values);

	for (const FHandleInfo& HandleInfo : Values)
	{
		SliderGeometry = AllottedGeometry;

		FTargetTypeDescription* TargetTypeDescription = TargetTypesDataTable->FindRow<FTargetTypeDescription>(HandleInfo.TargetType, "");
		if (TargetTypeDescription)
		{
			const float SliderHandleOffset = HandleInfo.HandlePosition * SliderLength;
			HandleTopLeftPoint = FVector2D(SliderHandleOffset + (0.5f * Indentation), SliderY - HalfHandleSize.Y + TargetTypeDescription->PaddingTop);

			// draw slider thumb
			FSlateDrawElement::MakeBox(
				OutDrawElements,
				LayerId + TargetTypeDescription->LayerIDOffset,
				SliderGeometry.ToPaintGeometry(TargetTypeDescription->SliderImage.ImageSize, FSlateLayoutTransform(HandleTopLeftPoint)),
				&TargetTypeDescription->SliderImage,
				DrawEffects,
                TargetTypeDescription->SliderImage.GetTint(InWidgetStyle) * InWidgetStyle.GetColorAndOpacityTint()
			);
		}
	}

	return LayerId;
}

FVector2D SMultiHandleSlider::ComputeDesiredSize(float) const
{
	static const FVector2D SSliderDesiredSize(16.0f, 16.0f);

	if (Style == nullptr)
	{
		return SSliderDesiredSize;
	}

	const float Thickness = FMath::Max(Style->BarThickness, Style->NormalThumbImage.ImageSize.Y);

	return FVector2D(SSliderDesiredSize.X, Thickness);
}

void SMultiHandleSlider::SetIndentHandle(const TAttribute<bool>& InIndentHandle)
{
	IndentHandle = InIndentHandle;
}

void SMultiHandleSlider::SetSliderBarColor(FSlateColor InSliderBarColor)
{
	SliderBarColor = InSliderBarColor;
}

void SMultiHandleSlider::SetTargetTypesDataTable(UDataTable* InTargetTypesDataTable)
{
	TargetTypesDataTable = InTargetTypesDataTable;
}

void SMultiHandleSlider::AddObjective(const FString& TargetID, const FName& TargetType)
{
	FHandleInfo HandleInfo;
	HandleInfo.TargetType = TargetType;
	HandleInfo.HandlePosition = 0.0f;
	HandlesMap.Add(TargetID, HandleInfo);
}

void SMultiHandleSlider::UpdateObjectiveHandlePosition(const FString& TargetID, float HandlePosition)
{
	if (HandlesMap.Contains(TargetID))
	{
		HandlesMap[TargetID].HandlePosition = HandlePosition;
	}
}

void SMultiHandleSlider::RemoveObjective(const FString& TargetID)
{
	if (HandlesMap.Contains(TargetID))
	{
		HandlesMap.Remove(TargetID);
	}
}

void SMultiHandleSlider::RemoveAllObjectives()
{
	HandlesMap.Reset();
}

bool SMultiHandleSlider::HasObjectives() const
{
	return HandlesMap.Num() > 0;
}
