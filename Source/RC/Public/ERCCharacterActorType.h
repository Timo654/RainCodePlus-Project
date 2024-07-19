#pragma once
#include "CoreMinimal.h"
#include "ERCCharacterActorType.generated.h"

UENUM(BlueprintType)
enum class ERCCharacterActorType : uint8 {
    Character,
    Pawn,
    Kakiwari,
    Animal,
    Off,
};

