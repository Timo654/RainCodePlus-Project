#pragma once
#include "CoreMinimal.h"
#include "ERCNzResultRankValue.generated.h"

UENUM(BlueprintType)
enum class ERCNzResultRankValue : uint8 {
    Rank_C,
    Rank_B,
    Rank_A,
    Rank_S,
    Rank_SS,
    Rank_None,
};

