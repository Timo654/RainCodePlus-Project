#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERCBoatAccelEventCode.h"
#include "RCBoatAccelDispatcherDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRCBoatAccelDispatcher, AActor*, Boat, ERCBoatAccelEventCode, code, FVector, Vec);

