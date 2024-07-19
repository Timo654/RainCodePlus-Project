#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUD_DebugSetDrawHUDDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCAdvHUD_DebugSetDrawHUD, bool, bInDraw);

