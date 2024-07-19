#pragma once
#include "CoreMinimal.h"
#include "RCUserWidget.h"
#include "RCUiWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiWidget : public URCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> WidgetAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> IsWidgetAnimationLoop;
    
public:
    URCUiWidget();

    UFUNCTION(BlueprintCallable)
    void StopWidgetAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayWidgetAnimation(UWidgetAnimation* InOneShotAnimation, UWidgetAnimation* InLoopAnimation, TArray<UWidgetAnimation*> InOneShotAnimationArray, TArray<UWidgetAnimation*> InLoopAnimationArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideFinished();
    
};

