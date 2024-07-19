#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "Waruagaki_LogoHiddenFinishDelegateDelegate.h"
#include "RCNzWaruagaki_LogoBase.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzWaruagaki_LogoBase : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaruagaki_LogoHiddenFinishDelegate WaruagakiLogoHiddenFinishDelegate;
    
    URCNzWaruagaki_LogoBase();

    UFUNCTION(BlueprintCallable)
    void PlayWaruagakiLogoShowAnim();
    
};

