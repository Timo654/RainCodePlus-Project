#pragma once
#include "CoreMinimal.h"
#include "ERCTitleSaveCheckConnectLastInfoType.generated.h"

UENUM(BlueprintType)
enum class ERCTitleSaveCheckConnectLastInfoType : uint8 {
    NORMAL,
    START_UP_CANCEL,
    TITLE_CANCEL,
};

