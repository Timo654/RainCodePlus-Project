#pragma once
#include "CoreMinimal.h"
#include "RCActionButtonPendingDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCActionButtonPendingDispatcher, int32, Times);

