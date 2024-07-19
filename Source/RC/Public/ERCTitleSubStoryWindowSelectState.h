#pragma once
#include "CoreMinimal.h"
#include "ERCTitleSubStoryWindowSelectState.generated.h"

UENUM(BlueprintType)
enum class ERCTitleSubStoryWindowSelectState : uint8 {
    CONTINUE,
    LOAD,
    NEWGAME,
    RETURN,
};

