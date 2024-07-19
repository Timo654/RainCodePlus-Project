#pragma once
#include "CoreMinimal.h"
#include "ERCNazoLSASceneState.generated.h"

UENUM(BlueprintType)
enum class ERCNazoLSASceneState : uint8 {
    Invalid,
    Unloaded,
    Loading,
    Loaded,
    Playing,
    Unloading,
    Max,
};

