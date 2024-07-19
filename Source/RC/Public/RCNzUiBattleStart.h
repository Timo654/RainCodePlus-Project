#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleStartStatus.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleStart.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleStart : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
public:
    URCNzUiBattleStart();
    bool bChangeSpeed;
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleStart();
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleStartStatus GetBattleStartStatus();
    
};

