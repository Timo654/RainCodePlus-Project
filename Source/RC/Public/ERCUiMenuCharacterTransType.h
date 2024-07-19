#pragma once
#include "CoreMinimal.h"
#include "ERCUiMenuCharacterTransType.generated.h"

UENUM(BlueprintType)
enum class ERCUiMenuCharacterTransType : uint8 {
    Character_Off,
    Character_Def,
    Character_OnCursor,
    Character_OnCursorWait,
    Character_OutCursor,
    Character_Push,
    Character_DeadStart,
    Character_Wait,
};

