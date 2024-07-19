#pragma once
#include "CoreMinimal.h"
#include "RCUiMenuCommonIcon.h"
#include "RCUiMenuWorldMapBusIcon.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuWorldMapBusIcon : public URCUiMenuCommonIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_MouseEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_MouseLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_MouseHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Click;
    
public:
    URCUiMenuWorldMapBusIcon();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishMouseEnterAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishClickAnim();
    
};

