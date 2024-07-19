#pragma once
#include "CoreMinimal.h"
#include "ERCSceneChangeType.generated.h"

UENUM(BlueprintType)
enum class ERCSceneChangeType : uint8 {
    None,
    Auto,
    ReNormal,
    ReLoading,
    NzNormal,
    NzLoading,
    Ex1,
    Deathmatch_In,
    Deathmatch_Out,
    SimpleWhiteFade,
};

