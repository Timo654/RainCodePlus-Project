#pragma once
#include "CoreMinimal.h"
#include "ERCOptionMobQuality.generated.h"

UENUM(BlueprintType)
enum class ERCOptionMobQuality : uint8 {
    MobLv0_Normal,
    MobLv1_Integrated,
    Max,
};

