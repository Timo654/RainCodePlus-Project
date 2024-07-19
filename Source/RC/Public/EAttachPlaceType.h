#pragma once
#include "CoreMinimal.h"
#include "EAttachPlaceType.generated.h"

UENUM(BlueprintType)
enum class EAttachPlaceType : uint8 {
    Overhead,
    Head,
    Eye,
    Mouth,
    Hand_R,
    Hand_L,
    Spine,
    Pelvis,
    Utility01,
    Utility02,
    Utility03,
    Utility04,
    Utility05,
};

