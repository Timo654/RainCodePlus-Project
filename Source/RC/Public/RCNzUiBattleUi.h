#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleUiStatus.h"
#include "RCNzUiBattleUiAssetData.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleUi.generated.h"

class URCNzCriminalButtonGuideList;
class URCNzUiBattleAssist;
class URCNzUiBattleKaiKagi;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleUi : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiBattleKaiKagi* kaikagi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiBattleAssist* Assist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAssistEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzCriminalButtonGuideList* ButtonGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bButtonGuideSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFinalBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRebuttalSlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisturbSlashEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* TimelimitWidget;
    
public:
    URCNzUiBattleUi();

    UFUNCTION(BlueprintCallable)
    void UninitializeBattleUi();
    
    UFUNCTION(BlueprintCallable)
    void SetTime(float Time, float LimitTime);
    
    UFUNCTION(BlueprintCallable)
    void SetKaiKagiName(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void SetElapsedTime(float ElapsedTime, float LimitTime);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonGuide(bool bInFinalBattle, bool bInRebuttalSlash, bool bInDisturbSlashEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAssistGauge(float InAssistGauge, float InAssistGaugeMax);
    
    UFUNCTION(BlueprintCallable)
    void RebuttalStart();
    
    UFUNCTION(BlueprintCallable)
    void RebuttalFinish();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleUi(FRCNzUiBattleUiAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleUiStatus GetBattleUiStatus();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ChangeKaiKagi(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void BattleUiStart(bool bOpenKaiKagi, bool bInAssistEnable);
    
    UFUNCTION(BlueprintCallable)
    void BattleUiFinish();
    
};

