#pragma once
#include "CoreMinimal.h"
#include "RCSequence_NotifyLSADelegate.generated.h"

class ALevelSequenceActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRCSequence_NotifyLSA, ALevelSequenceActor*, LSA);

