#pragma once
#include "CoreMinimal.h"
#include "ERCNazoBattleLSARebuttalAttackFailureType.generated.h"

UENUM(BlueprintType)
enum class ERCNazoBattleLSARebuttalAttackFailureType : uint8 {
    Failure00_WrongTargetAndWrongKaiKagi,
    Failure01_WrongTarget,
    Failure02_WrongKaiKagi,
    Max,
};

