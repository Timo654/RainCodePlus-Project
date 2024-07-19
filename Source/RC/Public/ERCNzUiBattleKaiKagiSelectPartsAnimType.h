#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleKaiKagiSelectPartsAnimType.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleKaiKagiSelectPartsAnimType : uint8 {
    Start,
    Wait,
    Finish,
    Next,
    Prev,
    ButtonOn,
    ButtonOff,
    Max,
};

