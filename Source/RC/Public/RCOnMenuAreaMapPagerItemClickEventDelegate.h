#pragma once
#include "CoreMinimal.h"
#include "RCOnMenuAreaMapPagerItemClickEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCOnMenuAreaMapPagerItemClickEvent, int32, TabIndex);

