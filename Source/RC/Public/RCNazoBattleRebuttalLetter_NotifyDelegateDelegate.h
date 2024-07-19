#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleRebuttalLetterNotifyData.h"
#include "RCNazoBattleRebuttalLetter_NotifyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCNazoBattleRebuttalLetter_NotifyDelegate, FRCNazoBattleRebuttalLetterNotifyData, NotifyData);

