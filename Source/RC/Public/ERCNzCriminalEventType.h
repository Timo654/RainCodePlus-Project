#pragma once
#include "CoreMinimal.h"
#include "ERCNzCriminalEventType.generated.h"

UENUM(BlueprintType)
enum class ERCNzCriminalEventType : uint8 {
    CriminalEvent_None,
    CriminalEvent_NextCamera,
    CriminalEvent_PrevCamera,
    CriminalEvent_SelectCriminal,
};

