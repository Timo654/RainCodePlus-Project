#pragma once
#include "CoreMinimal.h"
#include "RCActionButtonPassedEventDispatcherDelegate.generated.h"

class ARCActionButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRCActionButtonPassedEventDispatcher, FName, ID, ARCActionButton*, Button);

