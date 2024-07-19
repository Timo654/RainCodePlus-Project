#pragma once
#include "CoreMinimal.h"
#include "RCEffectSequence_OnFinishedDelegate.generated.h"

class URCEffectSequence;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCEffectSequence_OnFinished, URCEffectSequence*, InEffectSequence);

