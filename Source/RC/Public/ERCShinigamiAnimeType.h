#pragma once
#include "CoreMinimal.h"
#include "ERCShinigamiAnimeType.generated.h"

UENUM(BlueprintType)
enum class ERCShinigamiAnimeType : uint8 {
    None,
    Idle,
    IdleFukigen,
    IdleObie,
    Turn45_R,
    Turn45_L,
    Turn90_R,
    Turn90_L,
    Turn180_R,
    Turn180_L,
    Up,
    Down,
    Walk,
    WalkTilt_R,
    WalkTilt_L,
    Run,
    RunTilt_R,
    RunTilt_L,
};

