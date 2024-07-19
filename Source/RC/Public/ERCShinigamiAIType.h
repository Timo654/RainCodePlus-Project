#pragma once
#include "CoreMinimal.h"
#include "ERCShinigamiAIType.generated.h"

UENUM(BlueprintType)
enum class ERCShinigamiAIType : uint8 {
    None,
    Move,
    Action,
    Follow,
    FollowInRoom,
    FollowBoat,
    Route,
};

