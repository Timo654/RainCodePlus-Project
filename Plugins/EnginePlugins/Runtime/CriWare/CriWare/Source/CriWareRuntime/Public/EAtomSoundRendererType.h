#pragma once
#include "CoreMinimal.h"
#include "EAtomSoundRendererType.generated.h"

UENUM(BlueprintType)
namespace EAtomSoundRendererType {
    enum Type {
        Any,
        Native,
        Asr,
        Hardware1 = Native,
        Hardware2 = 5,
        Hardware3 = 9,
        Hardware4 = 13,
        VibrationHardware = 29,
        RESTRICTED = 254,
        Pad,
    };
}

