#pragma once
#include "CoreMinimal.h"
#include "EFinaleInteractPointType.generated.h"

UENUM(BlueprintType)
enum class EFinaleInteractPointType : uint8 {
    Piece,
    Detective,
    Detail,
    ViewPieceList,
    ViewIndex,
    None,
};

