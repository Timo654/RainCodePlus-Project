#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleHeadingClearWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleHeadingClearWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float showTime;
    
public:
    URCNzUiFinaleHeadingClearWidget();

    UFUNCTION(BlueprintCallable)
    void PlayHeadingClearShowAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayHeadingClearHiddenAnim();
    
};

