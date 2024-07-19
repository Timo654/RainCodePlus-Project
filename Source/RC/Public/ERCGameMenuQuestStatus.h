#pragma once
#include "CoreMinimal.h"
#include "ERCGameMenuQuestStatus.generated.h"

UENUM(BlueprintType)
enum class ERCGameMenuQuestStatus : uint8 {
    None,
    Orders,
    Complete,
    Failure,
};

