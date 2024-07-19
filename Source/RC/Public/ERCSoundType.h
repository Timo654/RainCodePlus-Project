#pragma once
#include "CoreMinimal.h"
#include "ERCSoundType.generated.h"

UENUM(BlueprintType)
enum class ERCSoundType : uint8 {
    BGM,
    SE,
    ENV,
    VOICE,
    BACKLOG,
    SOUND_SHEET_MAX = BACKLOG UMETA(Hidden),
    ENV_MAP,
    ENV_3D,
    SE_JINGLE,
    AMATAN_VOICE,
    OPTION_BGM,
    GAME_SE,
    MAX,
};

