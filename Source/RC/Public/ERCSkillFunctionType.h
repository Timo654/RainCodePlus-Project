#pragma once
#include "CoreMinimal.h"
#include "ERCSkillFunctionType.generated.h"

UENUM(BlueprintType)
enum class ERCSkillFunctionType : uint8 {
    Skill_HpUp,
    Skill_BattleSpeedDown,
    Skill_BattleKeySelectDown,
    Skill_BattleAssistTimeDown,
    Skill_BattleHajikuText,
    Skill_PazzleKeySelectDown,
    Skill_PazzleSelectDown,
    Skill_PazzleSpeedDown,
    Skill_SelectTimeLimitUp,
    Skill_SelectDown,
    Skill_MtbPowerUp,
    Skill_KeySelectDown,
    Skill_MoveSpeedUp,
};

