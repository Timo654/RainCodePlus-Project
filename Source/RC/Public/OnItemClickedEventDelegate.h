#pragma once
#include "CoreMinimal.h"
#include "OnItemClickedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClickedEvent, int32, ind);

