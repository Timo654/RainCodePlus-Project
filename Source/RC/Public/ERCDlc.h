#pragma once
#include "CoreMinimal.h"
#include "ERCDlc.generated.h"

UENUM(BlueprintType)
enum class ERCDlc : uint8 {
    RC,
    RC_DLC_CH21,
    RC_DLC_CH22,
    RC_DLC_CH23,
    RC_DLC_CH24,
    RC_DLC_CH25,
    RC_DLC_GALLERY,
    RC_Dev,
    EndCode,
};

