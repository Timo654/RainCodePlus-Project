#pragma once
#include "CoreMinimal.h"
#include "ERCStencilType.generated.h"

UENUM(BlueprintType)
enum class ERCStencilType : uint8 {
    Map,
    Character,
    NoEffect,
    ShinigamiEffect,
};

