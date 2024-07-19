#pragma once
#include "CoreMinimal.h"
#include "ERCNazoGameMode.generated.h"

UENUM(BlueprintType)
enum class ERCNazoGameMode : uint8 {
    None,
    FreeMove,
    KaikagiSelect,
    QteSelect,
    DoorSelect,
    CriminalSelect,
    SpotSelect,
    RecreatingScene,
    Battle,
    Pazzle,
    Mtb,
    Finale,
    Memorial,
    FinalBattle,
};

