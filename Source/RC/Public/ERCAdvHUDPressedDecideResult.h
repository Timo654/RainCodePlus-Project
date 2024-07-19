#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDPressedDecideResult.generated.h"

UENUM(BlueprintType)
enum class ERCAdvHUDPressedDecideResult : uint8 {
    Failed = 128,
    Failed_NoAccessableWidget,
    Failed_WaitingAccessedWidget,
    Failed_WidgetAnimation,
    Failed_WidgetSomething,
    Failed_NoComponent,
    Failed_HUDState,
    Failed_WaitLastAccessTimer,
    Successed_Character = 0,
    Successed_NPC,
    Successed_CheckActor,
    Successed_UnknownActor,
};

