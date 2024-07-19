#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "RCAnimNode_NoEyeLookCtrl.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCAnimNode_NoEyeLookCtrl : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    FRCAnimNode_NoEyeLookCtrl();
};

