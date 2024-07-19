#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "Waruagaki_InfoHiddenFinishDelegateDelegate.h"
#include "Waruagaki_InfoShowFinishDelegateDelegate.h"
#include "RCNzWaruagaki_Info.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzWaruagaki_Info : public URCUiWidgetBase {
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
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaruagaki_InfoShowFinishDelegate ShowFinishDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaruagaki_InfoHiddenFinishDelegate HiddenFinishDelegate;
    
    URCNzWaruagaki_Info();

    UFUNCTION(BlueprintCallable)
    void PlayWaruagakiInfoShowAnim();
    
};

