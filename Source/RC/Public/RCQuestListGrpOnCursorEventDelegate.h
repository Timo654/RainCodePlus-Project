#pragma once
#include "CoreMinimal.h"
#include "RCQuestListGrpOnCursorEventDelegate.generated.h"

class URCUiMenuQuestListGrp;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCQuestListGrpOnCursorEvent, URCUiMenuQuestListGrp*, Owner);

