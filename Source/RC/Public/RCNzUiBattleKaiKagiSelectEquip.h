#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleKaiKagiSelectEquip.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiSelectEquip : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_On;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Off;
    
public:
    URCNzUiBattleKaiKagiSelectEquip();

    UFUNCTION(BlueprintCallable)
    void On();
    
    UFUNCTION(BlueprintCallable)
    void Off();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiSelectEquip();
    
};

