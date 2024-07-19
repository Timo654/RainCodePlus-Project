#pragma once
#include "CoreMinimal.h"
#include "ERCCharacterBallonPositionType.generated.h"

UENUM(BlueprintType)
enum class ERCCharacterBallonPositionType : uint8 {
    Custom,
    Wait_Right,
    Wait_Left,
    Wait_Middle,
    Wait_Umb_Left,
    Wait_Umb_Middle,
    Sit_Right,
    Sit_Left,
    Squat_Right,
    Squat_Left,
    Sleep_Left,
    Wait_Child_Middle,
    Option01,
    Option02,
    Option03,
    Option04,
    Option05,
    Option06,
    Option07,
    Option08,
    Option09,
};

