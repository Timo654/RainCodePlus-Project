#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RCAutoPlayNodeOutputPin_TickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FRCAutoPlayNodeOutputPin_Tick, float, Alpha, FVector, InitPosition, FRotator, InitRotate, FVector, DistPosition, FRotator, DistRotate, FRotator, Heading);

