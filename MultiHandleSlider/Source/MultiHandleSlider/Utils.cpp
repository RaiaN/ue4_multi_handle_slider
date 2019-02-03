#include "Utils.h"

namespace UtilityFunctions
{
	float GetAngleBetweenVectors(const FVector& First, const FVector& Second)
	{
		return FMath::RadiansToDegrees(FMath::Atan2(First.X * Second.Y - First.Y * Second.X, First.X * Second.X + First.Y * Second.Y));
	}

	FVector GetForwardVectorFromRotator(const FRotator& Rotator)
	{
		return FRotationMatrix(Rotator).GetScaledAxis(EAxis::X);
	}
}