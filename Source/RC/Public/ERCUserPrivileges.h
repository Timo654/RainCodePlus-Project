#pragma once
#include "CoreMinimal.h"
#include "ERCUserPrivileges.generated.h"

UENUM(BlueprintType)
enum class ERCUserPrivileges : uint8 {
    CanPlay,
    CanNotPlay,
};

