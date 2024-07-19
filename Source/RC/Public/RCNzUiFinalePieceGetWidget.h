#pragma once
#include "CoreMinimal.h"
#include "HiddenFinishDelegateDelegate.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinalePieceGetWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinalePieceGetWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float showTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHiddenFinishDelegate HiddenFinishDelegate;
    
    URCNzUiFinalePieceGetWidget();

    UFUNCTION(BlueprintCallable)
    void PlayGetPieceShowAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayGetPieceHiddenAnim();
    
    UFUNCTION(BlueprintCallable)
    void CallHiddenFinishedDelegate();
    
};

