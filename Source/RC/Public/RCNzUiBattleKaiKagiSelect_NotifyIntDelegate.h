#pragma once
#include "CoreMinimal.h"
#include "RCNzUiBattleKaiKagiSelect_NotifyIntDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCNzUiBattleKaiKagiSelect_NotifyInt, int32, SelectIndex);

