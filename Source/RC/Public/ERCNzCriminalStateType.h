#pragma once
#include "CoreMinimal.h"
#include "ERCNzCriminalStateType.generated.h"

UENUM(BlueprintType)
enum class ERCNzCriminalStateType : uint8 {
    CriminalState_None,
    CriminalState_Begin,
    CriminalState_BeginProduction,
    CriminalState_Select,
    CriminalState_CorrectProduction,
    CriminalState_Correct,
    CriminalState_IncorrectProduction,
    CriminalState_Incorrect,
    CriminalState_HintProduction,
};

