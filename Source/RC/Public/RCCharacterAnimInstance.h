#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCAnimInstTurnData.h"
#include "RCAnimInstTurnSettings.h"
#include "RCAnimInstance.h"
#include "RCCharacterLipsyncMotionSlotData.h"
#include "RCCharacterMotionSlotData.h"
#include "RCCharacterSequencePlayerInfo.h"
#include "RCScriptActorAnimInstFootIKData.h"
#include "RCScriptActorAnimInstHitReactionData.h"
#include "RCCharacterAnimInstance.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, NonTransient)
class RC_API URCCharacterAnimInstance : public URCAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* RequestAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAnimPoseAlphaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestAnimPoseAlphaRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCCharacterMotionSlotData SlotData0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCCharacterMotionSlotData SlotData1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCCharacterMotionSlotData SlotDataEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorAnimInstFootIKData FootIKData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAnimInstTurnSettings TurnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAnimInstTurnData TurnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCScriptActorAnimInstHitReactionData HitReactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldingHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform HoldingHandPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFakeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCCharacterLipsyncMotionSlotData LipsyncSlotData;
    
    URCCharacterAnimInstance();

    UFUNCTION(BlueprintCallable)
    TArray<FRCCharacterSequencePlayerInfo> GetSequencePlayerInfos(FName InAnimGraphName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRCCharacterSequencePlayerInfo GetSequencePlayerInfo(FName InStateMachineName, FName InStateName, FName InSequenceName);
    
};

