#pragma once
#include "CoreMinimal.h"
#include "ERCCharacterMoveFadeType.generated.h"

UENUM(BlueprintType)
enum class ERCCharacterMoveFadeType : uint8 {
    None,
    FadeIn,
    FadeOut,
};

