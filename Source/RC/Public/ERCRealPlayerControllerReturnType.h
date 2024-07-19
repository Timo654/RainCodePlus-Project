#pragma once
#include "CoreMinimal.h"
#include "ERCRealPlayerControllerReturnType.generated.h"

UENUM(BlueprintType)
enum class ERCRealPlayerControllerReturnType : uint8 {
    Non,
    Talk,
    Check,
    CheckBusStop,
    ShinigamiTalk,
    ResearchExit,
    Research2ndCheck,
    Research2ndExit,
    ResearchVisionChange,
    ResearchVisionExit,
    KaiKagiSelect,
};

