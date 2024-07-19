#pragma once
#include "CoreMinimal.h"
#include "ERCVehicleType.generated.h"

UENUM(BlueprintType)
enum class ERCVehicleType : uint8 {
    Bus,
    Car1,
    Car2,
    Car3,
    Truck,
    Max,
};

