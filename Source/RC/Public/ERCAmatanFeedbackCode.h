#pragma once
#include "CoreMinimal.h"
#include "ERCAmatanFeedbackCode.generated.h"

UENUM(BlueprintType)
enum class ERCAmatanFeedbackCode : uint8 {
    APFeedback_None,
    APFeedback_Blocked,
    APFeedback_ArmHit,
};

