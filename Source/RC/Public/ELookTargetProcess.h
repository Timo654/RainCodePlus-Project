#pragma once
#include "CoreMinimal.h"
#include "ELookTargetProcess.generated.h"

UENUM()
enum class ELookTargetProcess : int32 {
    None,
    LookActor,
    LookCharacterSocket,
    LookPos,
};

