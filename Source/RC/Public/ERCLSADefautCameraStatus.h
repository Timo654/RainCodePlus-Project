#pragma once
#include "CoreMinimal.h"
#include "ERCLSADefautCameraStatus.generated.h"

UENUM(BlueprintType)
enum class ERCLSADefautCameraStatus : uint8 {
    None,
    Loading,
    LoadComplete,
};

