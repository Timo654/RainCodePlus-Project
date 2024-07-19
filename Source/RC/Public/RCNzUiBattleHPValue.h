#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleHPValueStatus.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleHPValue.generated.h"

class URichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleHPValue : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Recover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_CurrentHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_MaxHP;
    
public:
    URCNzUiBattleHPValue();

    UFUNCTION(BlueprintCallable)
    void SetHP(int32 InHP, int32 InMaxHP);
    
    UFUNCTION(BlueprintCallable)
    void RecoverAnim();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleHPValue();
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleHPValueStatus GetBattleHPValueStatus();
    
    UFUNCTION(BlueprintCallable)
    void DamageAnim();
    
};

