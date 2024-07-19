#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "OnOptionPageClickEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FOnOptionPageClickEvent, int32, PageIndex, const FPointerEvent&, InMouseEvent);

