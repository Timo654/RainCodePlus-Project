#pragma once
#include "CoreMinimal.h"
#include "ERCSequenceShinigamiTransformTypeLS.generated.h"

UENUM(BlueprintType)
enum class ERCSequenceShinigamiTransformTypeLS : uint8 {
    Shinigami,
    Actor,
    Transform,
    Player,
    Max,
};

