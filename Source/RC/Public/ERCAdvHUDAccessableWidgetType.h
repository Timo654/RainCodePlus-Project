#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDAccessableWidgetType.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDAccessableWidgetType : uint8 {
    Invalid,
    Balloon,
    TalkIcon,
    Marker,
    ResearchMarker,
    ChangeArea,
    EnterBuilding,
    BusStop,
    Max,
};

