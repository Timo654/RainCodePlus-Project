#pragma once
#include "CoreMinimal.h"
#include "OnOptionPageEnterEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOptionPageEnterEvent, int32, PageIndex);

