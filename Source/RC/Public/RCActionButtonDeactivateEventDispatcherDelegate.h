#pragma once
#include "CoreMinimal.h"
#include "RCActionButtonDeactivateEventDispatcherDelegate.generated.h"

class ARCActionButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRCActionButtonDeactivateEventDispatcher, FName, ID, ARCActionButton*, Button);

