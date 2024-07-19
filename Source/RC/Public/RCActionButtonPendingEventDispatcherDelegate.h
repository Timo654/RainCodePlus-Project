#pragma once
#include "CoreMinimal.h"
#include "RCActionButtonPendingEventDispatcherDelegate.generated.h"

class ARCActionButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRCActionButtonPendingEventDispatcher, FName, ID, ARCActionButton*, Button, int32, Times);

