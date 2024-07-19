#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiCountdown.generated.h"

class URCNzUiCountdownNum;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiCountdown : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Blinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiCountdownNum* CountdownNum;
    
public:
    URCNzUiCountdown();

    UFUNCTION(BlueprintCallable)
    void StopCountdown();
    
    UFUNCTION(BlueprintCallable)
    void StartCountdown();
    
    UFUNCTION(BlueprintCallable)
    void ShowCountdown();
    
    UFUNCTION(BlueprintCallable)
    void SetFTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable)
    void InitCountdown(int32 Time, int32 blinkingStartTime);
    
    UFUNCTION(BlueprintCallable)
    void CloseCountdown();
    
};

