#pragma once
#include "CoreMinimal.h"
#include "ERCGameMenuTopMenuType.generated.h"

UENUM(BlueprintType)
enum class ERCGameMenuTopMenuType : uint8 {
    REAL_CHAPTER0,
    REAL_CHAPTER0_QUEST,
    NAZO_CHAPTER0,
    REAL_CHAPTER1_START,
    REAL_CHAPTER1_SUB_QUEST,
    REAL,
    NAZO,
    REAL_UNKNOWN_PLAYER,
    Max,
};

