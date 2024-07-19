#pragma once
#include "CoreMinimal.h"
#include "RCActionButtonActivateEventDispatcherDelegate.generated.h"

class ARCActionButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRCActionButtonActivateEventDispatcher, FName, ID, ARCActionButton*, Button);

