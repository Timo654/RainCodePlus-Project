#pragma once
#include "CoreMinimal.h"
#include "EVehicleInitPositionLaneType.generated.h"

UENUM(BlueprintType)
enum class EVehicleInitPositionLaneType : uint8 {
    UpLane,
    DownLane,
    Spawn1,
    Spawn2,
    Spawn3,
    NONE,
};

