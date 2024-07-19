#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiChousaFinish.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiChousaFinish : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
public:
    URCNzUiChousaFinish();

    UFUNCTION(BlueprintCallable)
    void OpenChousaFinish();
    
    UFUNCTION(BlueprintCallable)
    bool IsFinished();
    bool bChangeSpeed;
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNzChousaFinishPriority();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseChousaFinish();
    
};

