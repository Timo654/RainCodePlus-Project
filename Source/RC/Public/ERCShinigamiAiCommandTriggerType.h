#pragma once
#include "CoreMinimal.h"
#include "ERCShinigamiAiCommandTriggerType.generated.h"

UENUM(BlueprintType)
enum class ERCShinigamiAiCommandTriggerType : uint8 {
    None,
    Box,
    Capsule,
    Sphere,
};

