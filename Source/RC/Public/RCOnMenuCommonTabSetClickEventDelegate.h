#pragma once
#include "CoreMinimal.h"
#include "RCOnMenuCommonTabSetClickEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCOnMenuCommonTabSetClickEvent, int32, TabIndex);

