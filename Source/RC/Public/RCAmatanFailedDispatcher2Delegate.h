#pragma once
#include "CoreMinimal.h"
#include "ERCAmatanPuzzleFailureCode.h"
#include "RCAmatanFailedDispatcher2Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRCAmatanFailedDispatcher2, int32, steps, ERCAmatanPuzzleFailureCode, code, int32, last);

