#pragma once
#include "CoreMinimal.h"
#include "EMotionClassification.generated.h"

UENUM(BlueprintType)
enum class EMotionClassification : uint8 {
    Master,
    Scene,
    Form,
    UnExpected,
};

