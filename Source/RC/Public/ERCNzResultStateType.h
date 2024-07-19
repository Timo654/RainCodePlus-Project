#pragma once
#include "CoreMinimal.h"
#include "ERCNzResultStateType.generated.h"

UENUM(BlueprintType)
enum class ERCNzResultStateType : uint8 {
    ResultState_None,
    ResultState_Start,
    ResultState_ReasoningPointIn,
    ResultState_ReasoningPointRank,
    ResultState_JudgementPointIn,
    ResultState_JudgementPointRank,
    ResultState_DeathmatchPointIn,
    ResultState_DeathmatchPointRank,
    ResultState_HitPointIn,
    ResultState_HitPointRank,
    ResultState_ResultRankIn,
    ResultState_ResultRank,
    ResultState_BonusPoint,
    ResultState_TanteiPoint,
    ResultState_TanteiPointGet,
    ResultState_WaitTanteiPointGet,
    ResultState_Wait,
    ResultState_Detail,
    ResultState_MenuIn,
};

