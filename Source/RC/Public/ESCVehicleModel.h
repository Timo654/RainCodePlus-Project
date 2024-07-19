#pragma once
#include "CoreMinimal.h"
#include "ESCVehicleModel.generated.h"

UENUM(BlueprintType)
enum class ESCVehicleModel : uint8 {
    NormalVehicle1,
    NormalVehicle2,
    NormalVehicle3,
    Bus,
    Truck,
    Max,
};

