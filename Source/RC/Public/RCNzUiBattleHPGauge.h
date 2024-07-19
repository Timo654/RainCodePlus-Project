#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERCNzUiBattleHPGaugeStatus.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleHPGauge.generated.h"

class UImage;
class URCNzUiBattleHPBar;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleHPGauge : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiBattleHPBar* HPBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* Img_Face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageTimeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageValuePerS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayDamageWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayDamageTimeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayDamageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayDamageValuePerS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamagePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecoverTimeFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoverValuePerS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath VigorFaceImagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath NormalFaceImagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath PinchFaceImagePath;
    
public:
    URCNzUiBattleHPGauge();

    UFUNCTION(BlueprintCallable)
    void UninitializeBattleHPGauge();
    
    UFUNCTION(BlueprintCallable)
    void SetHP(int32 InHP, int32 InMaxHP);
    
    UFUNCTION(BlueprintCallable)
    void Recover2(int32 InRecover, bool bInSilence);
    
    UFUNCTION(BlueprintCallable)
    void Recover(int32 InHP, bool bInSilence);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleHPGauge();
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleHPGaugeStatus GetBattleHPGaugeStatus();
    
    UFUNCTION(BlueprintCallable)
    void Damage2(int32 InDamage, bool bInSilence);
    
    UFUNCTION(BlueprintCallable)
    void Damage(int32 InHP, bool bInSilence);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    bool AutoRecover2(int32 InRecover, int32 InHP, int32 InMaxHP, bool bInSilence);
    
    UFUNCTION(BlueprintCallable)
    bool AutoRecover(int32 InNewHP, int32 InHP, int32 InMaxHP, bool bInSilence);
    
    UFUNCTION(BlueprintCallable)
    bool AutoDamage2(int32 InDamage, int32 InHP, int32 InMaxHP, bool bInSilence);
    
    UFUNCTION(BlueprintCallable)
    bool AutoDamage(int32 InNewHP, int32 InHP, int32 InMaxHP, bool bInSilence);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyHP(bool bInReset);
    
};

