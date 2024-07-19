#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCOnButtonGuidePartsClickEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRCOnButtonGuidePartsClickEvent, ERCInputKeyType, InputKeyType);

