#pragma once
#include "CoreMinimal.h"
#include "RCNazoBattleDisturbLetterNotifyData.h"
#include "RCNazoBattleDisturbLetter_NotifyDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCNazoBattleDisturbLetter_NotifyDelegate, FRCNazoBattleDisturbLetterNotifyData, NotifyData);

