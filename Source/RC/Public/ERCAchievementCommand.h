#pragma once
#include "CoreMinimal.h"
#include "ERCAchievementCommand.generated.h"

UENUM(BlueprintType)
enum class ERCAchievementCommand : uint8 {
    None,
    Create,
    Progress,
    Unlock,
    Lock,
    Show,
    Delete,
};

