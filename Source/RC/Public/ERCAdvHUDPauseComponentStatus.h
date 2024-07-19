#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDPauseComponentStatus.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDPauseComponentStatus : uint8 {
    None,
    Pause,
    Menu,
    Backlog,
    BacklogClose,
};

