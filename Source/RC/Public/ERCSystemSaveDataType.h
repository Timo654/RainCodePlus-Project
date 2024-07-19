#pragma once
#include "CoreMinimal.h"
#include "ERCSystemSaveDataType.generated.h"

UENUM(BlueprintType)
enum class ERCSystemSaveDataType : uint8 {
    SystemSaveData,
    GameSaveData,
    DevelopmentSaveData,
};

