#pragma once
#include "CoreMinimal.h"
#include "ERCShinigamiSpeedType.generated.h"

UENUM(BlueprintType)
enum class ERCShinigamiSpeedType : uint8 {
    Normal,
    Fast,
    Turbo,
    Warp,
    Player,
};

