#pragma once
#include "CoreMinimal.h"
#include "ERCOptionMobDraw.generated.h"

UENUM(BlueprintType)
enum class ERCOptionMobDraw : uint8 {
    MobDrawLv0_Normal,
    MobDrawLv1_Little,
    Max,
};

