#pragma once
#include "CoreMinimal.h"
#include "ERCAchievementOperationID.generated.h"

UENUM(BlueprintType)
enum class ERCAchievementOperationID : uint8 {
    OID_ALL,
    OID_EVENT,
    OID_BATTLE_HANRON,
    OID_BATTLE_GAYA,
    OID_BATTLE_HAJIKI,
    OID_BATTLE_ASSIST,
    OID_BATTLE_3WAY,
    OID_BATTLE_JUST_MOVE,
    OID_ALL_SS_CLEAR,
    OID_SKILL_ALL_OPEN,
    OID_RANK,
    OID_FIGURE,
    OID_SHINMITSU_CLEAR,
    OID_SUBQUEST_CLEAR,
    Max,
};

