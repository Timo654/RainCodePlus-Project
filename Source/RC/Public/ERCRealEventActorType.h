#pragma once
#include "CoreMinimal.h"
#include "ERCRealEventActorType.generated.h"

UENUM(BlueprintType)
enum class ERCRealEventActorType : uint8 {
    None,
    CharacterActor,
    PawnActor,
    CheckActor,
    EventTrigger,
};

