#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMotionEventSlotSwitchType.h"
#include "EMotionSlotType.h"
#include "RCCharacterAnimCtrl.generated.h"

class URCCharacterAnimInstance;
class URCCharacterMotionListDataAsset;
class URCExtraMotionCtrl;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCCharacterAnimCtrl : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bSequencerPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentAnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentAnimation1Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentUseSlotExAnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString AnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString Animation1Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString ExAnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSlotAlpha0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SlotAlpha0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSlotAlpha1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SlotAlpha1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentSlotAlphaEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SlotAlphaEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPlayRateBasis0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlayRateBasis0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPlayRateBasis1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlayRateBasis1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPlayRateBasisEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlayRateBasisEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPlayRate0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlayRate0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPlayRate1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlayRate1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentPlayRateEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PlayRateEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentMotionLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMotionLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOutMotion0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOutMotion1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bOutMotionEx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentLipsyncAnimationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentLipsyncSlotAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentLipsyncPlayRateBasis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentLipsyncPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LipsyncBlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCCharacterMotionListDataAsset* MotionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URCCharacterAnimInstance*> RCCharacterAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> SkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EMotionSlotType CurrentUseSlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsSpawnedFromFurumaiSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCExtraMotionCtrl* ExtraMotionCtrl;
    
public:
    URCCharacterAnimCtrl(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SwitchOutCurrentMotion();
    
    UFUNCTION(BlueprintCallable)
    void SwitchLipsyncIdle();
    
    UFUNCTION(BlueprintCallable)
    void StopLipsyncMotion();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRateBasis(const float InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(const float InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayLoop(bool bLoop);
    
    UFUNCTION(BlueprintCallable)
    void SetNewAnimBP(UClass* InNewAnimClass);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraIdleTransition(bool bInbExtraIdleTransition);
    
    UFUNCTION(BlueprintCallable)
    void SetDeathMatchFlag(bool bInDeathMatch);
    
    UFUNCTION(BlueprintCallable)
    bool PlayMotion(const FName InMotionName, bool bLoop, const float InPlayRate, EMotionSlotType InUseSlot, EMotionEventSlotSwitchType InSwitchType, const float InLoopMotionPlayStartPosRate, const float InSwitchDurationSec, bool bBlend);
    
    UFUNCTION(BlueprintCallable)
    bool PlayLipsyncMotion(const FName InMotionName, bool bLoop, const float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    bool IsStartedMotion();
    
    UFUNCTION(BlueprintCallable)
    bool IsMotionBlend();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinishedMotion();
    
    UFUNCTION(BlueprintCallable)
    bool IsExtraIdleTransition();
    
    UFUNCTION(BlueprintCallable)
    bool IsExistOutCurrentMotion();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUseExtraIdleIndex();
    
    UFUNCTION(BlueprintCallable)
    void EventSequenceFinished();
    
    UFUNCTION(BlueprintCallable)
    void EventReset();
    
    UFUNCTION(BlueprintCallable)
    void EventIdle();
    
    UFUNCTION(BlueprintCallable)
    void EventFinishedOutMotion(const int32 InSlotNumber, const float InBlendSec);
    
    UFUNCTION(BlueprintCallable)
    void EventFinishedLoopMotion(const int32 InSlotNumber);
    
    UFUNCTION(BlueprintCallable)
    void EventFinishedInMotion(const int32 InSlotNumber);
    
    UFUNCTION(BlueprintCallable)
    void EventFinished();
    
};

