#pragma once
#include "CoreMinimal.h"
#include "ERCAmatanPuzzleFailureCode.h"
#include "RCAmatanFailedDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRCAmatanFailedDispatcher, int32, steps, ERCAmatanPuzzleFailureCode, code);

