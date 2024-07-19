#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PieceCorrectHiddenFinishDelegateDelegate.h"
#include "PieceIncorrectHiddenFinishDelegateDelegate.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinalePieceCorrectWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinalePieceCorrectWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Correct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Incorrect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float showTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPlayAnimForward;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceCorrectHiddenFinishDelegate FinishCorrectAnimDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPieceIncorrectHiddenFinishDelegate FinishIncorrectAnimDelegate;
    
    URCNzUiFinalePieceCorrectWidget();

    UFUNCTION(BlueprintCallable)
    void PlayInCorrectPieceShowAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayCorrectPieceShowAnim();
    
    UFUNCTION(BlueprintCallable)
    void PlayCorrectPieceHiddenAnim();
    
};

