#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCReUiChousaButtonGuide.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiChousaButtonGuide : public URCUiWidgetBase {
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
    URCReUiChousaButtonGuide();

    UFUNCTION(BlueprintCallable)
    void WaitingOpen();
    
    UFUNCTION(BlueprintCallable)
    void Wait();
    
    UFUNCTION(BlueprintCallable)
    void SetGuideParts(bool bInIsResearch);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeChousaButtonGuide(bool bInIsResearch);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

