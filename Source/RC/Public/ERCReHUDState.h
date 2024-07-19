#pragma once
#include "CoreMinimal.h"
#include "ERCReHUDState.generated.h"

UENUM(BlueprintType)
enum class ERCReHUDState : uint8 {
    None,
    FreeMove_Start,
    FreeMove,
    FreeMove_Finish,
    Talk_Start,
    Talk,
    Talk_Finish,
    SequentialTalk,
    Select_Start,
    Select,
    Select_Finish,
    ResearchMode,
    PastVision,
    SoundNovel,
    Max,
};

