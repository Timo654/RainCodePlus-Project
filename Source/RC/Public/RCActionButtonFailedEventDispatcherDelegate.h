#pragma once
#include "CoreMinimal.h"
#include "ERCActionFailureReason.h"
#include "RCActionButtonFailedEventDispatcherDelegate.generated.h"

class ARCActionButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRCActionButtonFailedEventDispatcher, FName, ID, ARCActionButton*, Button, ERCActionFailureReason, reason);

