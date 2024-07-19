#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RCAutoPlayNodeOutputPin2_CompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FRCAutoPlayNodeOutputPin2_Completed, FVector, InitPosition, FRotator, InitRotate, float, Alpha, FVector, DistPosition, float, RotAlpha, FRotator, DistRotate, float, HeadingAlpha, FRotator, Heading);

