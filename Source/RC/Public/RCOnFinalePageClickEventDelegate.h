#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "RCOnFinalePageClickEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRCOnFinalePageClickEvent, int32, PageIndex, const FPointerEvent&, InMouseEvent);

