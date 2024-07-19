#pragma once
#include "CoreMinimal.h"
#include "ERCSequenceShinigamiTransformTypeLSA.generated.h"

UENUM(BlueprintType)
enum class ERCSequenceShinigamiTransformTypeLSA : uint8 {
    LSA,
    Shinigami,
    Actor,
    Transform,
    Player,
    Max,
};

