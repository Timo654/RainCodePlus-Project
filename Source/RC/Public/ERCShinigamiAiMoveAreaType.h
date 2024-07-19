#pragma once
#include "CoreMinimal.h"
#include "ERCShinigamiAiMoveAreaType.generated.h"

UENUM(BlueprintType)
enum class ERCShinigamiAiMoveAreaType : uint8 {
    None,
    Box,
    Capsule,
    Sphere,
};

