#pragma once
#include "CoreMinimal.h"
#include "ERCOptionMobNum.generated.h"

UENUM(BlueprintType)
enum class ERCOptionMobNum : uint8 {
    MobNumLv0_Normal,
    MobNumLv1_75,
    MobNumLv2_50,
    MobNumLv3_25,
    MobNumLv4_00,
    Max,
};

