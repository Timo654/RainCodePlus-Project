#pragma once
#include "CoreMinimal.h"
#include "EJSONResult.generated.h"

UENUM(BlueprintType)
enum class EJSONResult : uint8 {
    Success,
    HttpFailed,
    JSONParsingFailed,
};

