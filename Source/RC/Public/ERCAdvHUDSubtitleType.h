#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDSubtitleType.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDSubtitleType : uint8 {
    Normal,
    SeqEvent,
    Movie,
    ForceDraw,
    Battle,
    Max,
};

