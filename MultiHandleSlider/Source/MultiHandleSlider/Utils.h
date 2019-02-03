#pragma once

#include "CoreMinimal.h"

namespace UtilityFunctions
{
	float GetAngleBetweenVectors(const FVector& First, const FVector& Second);

	FVector GetForwardVectorFromRotator(const FRotator& Rotator);
}