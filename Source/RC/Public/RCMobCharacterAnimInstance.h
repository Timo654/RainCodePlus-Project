#pragma once
#include "CoreMinimal.h"
#include "RCCharacterAnimInstance.h"
#include "RCMobCharacterAnimInstance.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, NonTransient)
class RC_API URCMobCharacterAnimInstance : public URCCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* MobDefaultAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobDefaultLoopMotionPlayStartPos;
    
    URCMobCharacterAnimInstance();

};

