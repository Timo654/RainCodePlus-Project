#pragma once
#include "CoreMinimal.h"
#include "ERCSaveLoadStatus.generated.h"

UENUM(BlueprintType)
enum class ERCSaveLoadStatus : uint8 {
    None,
    Checking,
    Loading,
    Saving,
};

