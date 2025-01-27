#pragma once
#include "CoreMinimal.h"
#include "ERCAchievementID.generated.h"

UENUM(BlueprintType)
enum class ERCAchievementID : uint8 {
    AID_ALL,
    AID_EVENT_CH0_CLEAR,
    AID_EVENT_CH1_CLEAR,
    AID_EVENT_CH2_CLEAR,
    AID_EVENT_CH3_CLEAR,
    AID_EVENT_CH4_CLEAR,
    AID_EVENT_CH5_CLEAR,
    AID_EVENT_GAME_CLEAR,
    AID_EVENT_FIND_DESUHIKO,
    AID_EVENT_BOMB_CLEAR,
    AID_EVENT_RUN_CLEAR,
    AID_EVENT_AMATAN_MOVE,
    AID_EVENT_EAT_NIKUMAN,
    AID_EVENT_HARARA,
    AID_EVENT_DESUHIKO,
    AID_EVENT_FUBUKI,
    AID_EVENT_VIVIA,
    AID_EVENT_MAKOTO,
    AID_BATTLE_HANRON,
    AID_BATTLE_GAYA,
    AID_BATTLE_HAJIKI,
    AID_BATTLE_ASSIST,
    AID_BATTLE_3WAY,
    AID_BATTLE_JUST_MOVE,
    AID_PAZZLE_CLEAR,
    AID_HANNIN_CLEAR,
    AID_MTB_CLEAR,
    AID_FINALE_CLEAR,
    AID_ALL_SS_CLEAR,
    AID_SKILL_ALL_OPEN,
    AID_RANK_10,
    AID_RANK_30,
    AID_RANK_50,
    AID_FIGURE_ALL,
    AID_SHINMITSU_ONE_CLEAR,
    AID_SUBQUEST_1_CLEAR,
    AID_SUBQUEST_10_CLEAR,
    AID_SUBQUEST_ALL_CLEAR,
    Max,
};

