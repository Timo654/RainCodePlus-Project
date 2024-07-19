#pragma once
#include "CoreMinimal.h"
#include "RCBoatSpeedStepDispatcherDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRCBoatSpeedStepDispatcher, AActor*, Boat, int32, step);

