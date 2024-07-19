#pragma once
#include "CoreMinimal.h"
#include "ERCSoundOptionType.generated.h"

UENUM(BlueprintType)
enum class ERCSoundOptionType : uint8 {
    BGM,
    GameSE,
    SystemSE,
    VOICE,
    JINGLE,
    None,
};

