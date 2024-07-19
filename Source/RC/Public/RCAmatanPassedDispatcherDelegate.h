#pragma once
#include "CoreMinimal.h"
#include "RCAmatanPassedDispatcherDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FRCAmatanPassedDispatcher, AActor*, Overlap, int32, Index, int32, steps, bool, Clear);

