#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "FinishedBurnOutADelegate.h"
#include "FinishedBurnOutBDelegate.h"
#include "FinishedLightingADelegate.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleTimeLimitBase.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleTimeLimitBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Lighting_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Burn_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_BurnOut_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_BurnOut_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isBurnOutB;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent Finished_AN_Lighting_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent Finished_AN_BurnOut_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent Finished_AN_BurnOut_B;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishedLightingA FinishedLightingADelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishedBurnOutA FinishedBurnOutADelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishedBurnOutB FinishedBurnOutBDelegate;
    
    URCNzUiFinaleTimeLimitBase();

    UFUNCTION(BlueprintCallable)
    void PlayTimerStartAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayGameOverAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayBurnOutBAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayBurnOutAAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayBurnAAnim();
    
    UFUNCTION(BlueprintCallable)
    void InitializeTimeLimit();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Finished_AN_Lighting_A_Event();
    
    UFUNCTION(BlueprintCallable)
    void Finished_AN_BurnOutB_Event();
    
    UFUNCTION(BlueprintCallable)
    void Finished_AN_BurnOutA_Event();
    
};

