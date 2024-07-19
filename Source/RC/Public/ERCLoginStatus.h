#pragma once
#include "CoreMinimal.h"
#include "ERCLoginStatus.generated.h"

UENUM(BlueprintType)
enum class ERCLoginStatus : uint8 {
    NotLoggedIn,
    LoggedIn,
};

