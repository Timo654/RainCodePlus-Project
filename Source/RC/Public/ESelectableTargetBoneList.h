#pragma once
#include "CoreMinimal.h"
#include "ESelectableTargetBoneList.generated.h"

UENUM(BlueprintType)
enum class ESelectableTargetBoneList : uint8 {
    root,
    pelvis,
    spine_01,
    spine_02,
    spine_03,
    neck_01,
    head,
    clavicle_l,
    clavicle_r,
    upperarm_l,
    upperarm_r,
    lowerarm_l,
    lowerarm_r,
    hand_l,
    hand_r,
    thigh_l,
    thigh_r,
    calf_l,
    calf_r,
    foot_l,
    foot_r,
    ball_l,
    ball_r,
};

