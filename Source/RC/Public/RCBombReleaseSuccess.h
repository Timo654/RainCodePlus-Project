#pragma once
#include "CoreMinimal.h"
#include "RCUserWidget.h"
#include "RCBombReleaseSuccess.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCBombReleaseSuccess : public URCUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_On_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Off;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isStartAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isFinishAnimation;
    
public:
    URCBombReleaseSuccess();

    UFUNCTION(BlueprintCallable)
    void StartAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OffAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinishedAnimation();
    
    UFUNCTION(BlueprintCallable)
    void FinishAnimation();
    
};

