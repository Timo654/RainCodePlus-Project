#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleHPBarStatus.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleHPBar.generated.h"

class UCanvasPanel;
class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleHPBar : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Recover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* DamageDelayBar_Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Img_DamageDelayBar_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* AttenuationBar_Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Img_AttenuationBar_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CurrentHPBar_Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Img_CurrentHPBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* DamageEffect_Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Img_DamageEffect_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RecoverEffect_Mask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Img_RecoverEffect_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Img_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Img_Dropshadow;
    
public:
    URCNzUiBattleHPBar();

    UFUNCTION(BlueprintCallable)
    void SetHP(int32 InHP, int32 InMaxHP, bool bInApplyDelayHP);
    
    UFUNCTION(BlueprintCallable)
    void SetDelayHP(int32 InDelayHP);
    
    UFUNCTION(BlueprintCallable)
    void ResetHP(int32 InHP, int32 InMaxHP);
    
    UFUNCTION(BlueprintCallable)
    void RecoverAnim();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleHPBar();
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleHPBarStatus GetBattleHPBarStatus();
    
    UFUNCTION(BlueprintCallable)
    void DamageAnim();
    
};

