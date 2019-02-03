#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateColor.h"
#include "Styling/SlateTypes.h"
#include "MultiHandleSliderStructures.generated.h"

USTRUCT(BlueprintType)
struct FTargetTypeDescription : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target Type Description")
	FSlateBrush SliderImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target Type Description")
	int32 LayerID = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Target Type Description")
	float PaddingTop = 0.0f;
};

struct FHandleInfo
{

public:
	float HandlePosition;
	FName TargetType;
    bool bShow;
};

class AActor;


USTRUCT()
struct FTargetActorInfo
{
    GENERATED_BODY()

public:
	FString TargetID;
	FName TargetType;

    UPROPERTY(Transient)
	AActor* TargetActor;
};

USTRUCT()
struct FTargetLocationInfo
{
    GENERATED_BODY()

public:
	FString TargetID;
	FName TargetType;
	FVector TargetLocation;
};

