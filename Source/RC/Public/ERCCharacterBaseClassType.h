#pragma once
#include "CoreMinimal.h"
#include "ERCCharacterBaseClassType.generated.h"

UENUM(BlueprintType)
enum class ERCCharacterBaseClassType : uint8 {
    None,
    CharacterBase,
    PawnBase,
    ActorBase,
    AnimalBase,
};

