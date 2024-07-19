#pragma once
#include "CoreMinimal.h"
#include "ERCAttachRotRule.generated.h"

UENUM(BlueprintType)
enum class ERCAttachRotRule : uint8 {
    None,
    ChrFront,
    ChrFrontZLock,
    ChrMoveDir,
    TwoBoneDir,
    World,
};

