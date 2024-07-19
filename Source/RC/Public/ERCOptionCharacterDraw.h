#pragma once
#include "CoreMinimal.h"
#include "ERCOptionCharacterDraw.generated.h"

UENUM(BlueprintType)
enum class ERCOptionCharacterDraw : uint8 {
    CharacterDrawLv0_Normal,
    CharacterDrawLv1_Little,
    CharacterDrawLv2_Large,
    CharacterDrawLv3_Large2,
    Max,
};

