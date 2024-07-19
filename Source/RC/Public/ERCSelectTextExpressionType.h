#pragma once
#include "CoreMinimal.h"
#include "ERCSelectTextExpressionType.generated.h"

UENUM(BlueprintType)
enum class ERCSelectTextExpressionType : uint8 {
    ChangeMaterials,
    ChangeParameters,
};

