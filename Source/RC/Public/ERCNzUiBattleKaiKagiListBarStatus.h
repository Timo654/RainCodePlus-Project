#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleKaiKagiListBarStatus.generated.h"

UENUM(BlueprintType)
enum class ERCNzUiBattleKaiKagiListBarStatus : uint8 {
    Idle,
    Show,
    Run,
    Hide,
};

