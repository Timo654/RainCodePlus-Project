#pragma once
#include "CoreMinimal.h"
#include "ERCSkillType.generated.h"

UENUM(BlueprintType)
enum class ERCSkillType : uint8 {
    Hp,
    Attack,
    Defense,
};

