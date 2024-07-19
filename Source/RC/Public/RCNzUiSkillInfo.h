#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiSkillInfo.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiSkillInfo : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
public:
    URCNzUiSkillInfo();

    UFUNCTION(BlueprintCallable)
    void StartSkillInfo(FName ID, float StartOffsetTime, float InFinishWaitTime, bool bInFinishSE);
    bool bChangeSpeed;
    UFUNCTION(BlueprintCallable)
    void SetWaitTime(float sec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinished() const;
    
};

