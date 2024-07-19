#pragma once
#include "CoreMinimal.h"
#include "ERCShinigamiAiMoveType.generated.h"

UENUM(BlueprintType)
enum class ERCShinigamiAiMoveType : uint8 {
    Area,
    NearPlayer,
};

