#pragma once
#include "CoreMinimal.h"
#include "ERCAmatanFeedbackCode.h"
#include "RCAmatanFeedbackDispatcherDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FRCAmatanFeedbackDispatcher, ERCAmatanFeedbackCode, code, AActor*, blocked, float, Angle);

