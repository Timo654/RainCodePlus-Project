#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDTalkWindowType.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDTalkWindowType : uint8 {
    Normal,
    Shinigami,
    CutinStart,
    CutinFinish,
    CutinAnimNext,
    Max,
};

