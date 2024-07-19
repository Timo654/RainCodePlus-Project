#pragma once
#include "CoreMinimal.h"
#include "ERCNazoLSAState.generated.h"

UENUM(BlueprintType)
enum class ERCNazoLSAState : uint8 {
    Invalid,
    Load,
    Initialize,
    LoadScene,
    PlayScene,
    ChangeScene,
    End,
    SceneTest,
    Max,
};

