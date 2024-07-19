#pragma once
#include "CoreMinimal.h"
#include "EFacialMorphTargetClass.generated.h"

UENUM(BlueprintType)
enum class EFacialMorphTargetClass : uint8 {
    None,
    Eye,
    Eyebrow,
    Mouth,
    Body,
    Hand,
};

