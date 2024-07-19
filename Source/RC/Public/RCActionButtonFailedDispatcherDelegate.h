#pragma once
#include "CoreMinimal.h"
#include "ERCActionFailureReason.h"
#include "RCActionButtonFailedDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCActionButtonFailedDispatcher, ERCActionFailureReason, code);

