#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleKaiKagiStatus.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleKaiKagiStatus : uint8 {
    Idle,
    Show,
    Run,
    Hide,
};

