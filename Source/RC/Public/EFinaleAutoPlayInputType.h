#pragma once
#include "CoreMinimal.h"
#include "EFinaleAutoPlayInputType.generated.h"

UENUM(BlueprintType)
enum class EFinaleAutoPlayInputType : uint8 {
    Decide,
    OpenPieceList,
    PieceLeft,
    PieceRight,
    PageLeft,
    PageRight,
    Move,
    Cancel,
    LowSpeedMode,
    None,
};

