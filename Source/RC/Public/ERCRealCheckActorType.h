#pragma once
#include "CoreMinimal.h"
#include "ERCRealCheckActorType.generated.h"

UENUM(BlueprintType)
enum class ERCRealCheckActorType : uint8 {
    None,
    Check,
    CheckBuilding,
    AreaMove,
    EnterBuilding,
    BusStop,
    Research,
    Research2nd,
    ResearchVision,
    SpotSelect,
    Figure,
};

