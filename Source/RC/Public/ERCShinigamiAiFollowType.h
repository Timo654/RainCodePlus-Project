#pragma once
#include "CoreMinimal.h"
#include "ERCShinigamiAiFollowType.generated.h"

UENUM(BlueprintType)
enum class ERCShinigamiAiFollowType : uint8 {
    Wait,
    MoveNormal,
    MoveFar,
    MoveFollow,
    WaitAngry,
    WaitAngryIndoor,
    ExWait,
};

