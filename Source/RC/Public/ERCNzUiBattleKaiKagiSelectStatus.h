#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleKaiKagiSelectStatus.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleKaiKagiSelectStatus : uint8 {
    Idle,
    Show,
    Run,
    KaiKagiList,
    Hide,
    Decide,
};

