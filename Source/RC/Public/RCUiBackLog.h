#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCUiBackLog.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiBackLog : public URCUiWidgetBase {
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
    URCUiBackLog();

    UFUNCTION(BlueprintCallable)
    void StartBackLog();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonGuidePlayVoiceClick(ERCInputKeyType KeyType);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonGuideCloseClick(ERCInputKeyType KeyType);
    
    UFUNCTION(BlueprintCallable)
    void FinishBackLog();
    
};

