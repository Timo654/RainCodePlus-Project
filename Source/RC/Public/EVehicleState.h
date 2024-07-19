#pragma once
#include "CoreMinimal.h"
#include "EVehicleState.generated.h"

UENUM(BlueprintType)
enum EVehicleState {
    Inactive,
    Stop,
    Brake,
    Accelerator,
    Slow,
};

