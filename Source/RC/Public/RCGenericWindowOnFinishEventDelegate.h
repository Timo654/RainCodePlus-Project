#pragma once
#include "CoreMinimal.h"
#include "RCGenericWindowOnFinishEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCGenericWindowOnFinishEvent, bool, bResult);

