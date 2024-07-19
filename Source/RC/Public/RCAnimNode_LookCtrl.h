#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "RCAnimNode_LookCtrl.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCAnimNode_LookCtrl : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    FRCAnimNode_LookCtrl();
};

