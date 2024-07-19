#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "IndexClearHiddenFinishDelegateDelegate.h"
#include "IndexClearPlaySEDelegateDelegate.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleIndexClearWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleIndexClearWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float showTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndexClearHiddenFinishDelegate HiddenFinishDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIndexClearPlaySEDelegate IndexClearPlaySEDelegate;
    
    URCNzUiFinaleIndexClearWidget();

    UFUNCTION(BlueprintCallable)
    void PlayIndexClearShowAnim();
    
};

