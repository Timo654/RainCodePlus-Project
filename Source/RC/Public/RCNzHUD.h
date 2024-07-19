#pragma once
#include "CoreMinimal.h"
#include "ERCAdvHUDWidgetState.h"
#include "ERCSkillFunctionType.h"
#include "RCReHUD.h"
#include "RCNzHUD.generated.h"

class URCNzUiBattleGameOver;
class URCNzUiBattleHPGauge;
class URCNzUiBattleHint;
class URCNzUiCountdown;
class URCNzUiSkillInfoList;
class URCTimer;

UCLASS(Blueprintable, NonTransient)
class RC_API ARCNzHUD : public ARCReHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiBattleHPGauge* HPGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiBattleHint* HintWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiBattleGameOver* GameOverWidget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzUiSkillInfoList* SkillInfoListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzUiCountdown* CountdownWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCTimer* CountdownTimer;
    
public:
    ARCNzHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SkillInfoListStartByType(const TArray<ERCSkillFunctionType>& skillFunctionTypeList);
    
    UFUNCTION(BlueprintCallable)
    bool SkillInfoListStart(const TArray<FName>& skillNameTextIDList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SkillInfoListIsFinished() const;
    
    UFUNCTION(BlueprintCallable)
    bool HPGaugeStart();
    
    UFUNCTION(BlueprintCallable)
    bool HPGaugeRecoverForScene(int32& OutResultHP, bool bInSilence);
    
    UFUNCTION(BlueprintCallable)
    bool HPGaugeRecover(int32 InRecover, int32& OutResultHP, bool bInSilence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCAdvHUDWidgetState HPGaugeGetState();
    
    UFUNCTION(BlueprintCallable)
    bool HPGaugeFinish();
    
    UFUNCTION(BlueprintCallable)
    bool HPGaugeDamageForScene(int32& OutResultHP, bool bInSilence);
    
    UFUNCTION(BlueprintCallable)
    bool HPGaugeDamage(int32 InDamage, int32& OutResultHP, bool bInSilence);
    
    UFUNCTION(BlueprintCallable)
    bool HintStart(FName HintTextId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HintIsFinished();
    
    UFUNCTION(BlueprintCallable)
    bool GameOverStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GameOverIsFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GameOverGetSelectedIndex();
    
    UFUNCTION(BlueprintCallable)
    bool CountdownWidgetOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CountdownWidgetIsOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CountdownWidgetIsClosed();
    
    UFUNCTION(BlueprintCallable)
    bool CountdownWidgetClose(bool bInTimerPause);
    
    UFUNCTION(BlueprintCallable)
    bool CountdownStop();
    
    UFUNCTION(BlueprintCallable)
    bool CountdownStartTime(int32 InHours, int32 InMinutes, int32 InSeconds, int32 InMilliseconds, bool bInWidgetOpen);
    
    UFUNCTION(BlueprintCallable)
    bool CountdownStartSecond(float InTime, bool bInWidgetOpen);
    
    UFUNCTION(BlueprintCallable)
    bool CountdownStartMillisecond(int32 InTime, bool bInWidgetOpen);
    
    UFUNCTION(BlueprintCallable)
    bool CountdownSetProgressAndTime(int32 InProgress);
    
    UFUNCTION(BlueprintCallable)
    bool CountdownResume();
    
    UFUNCTION(BlueprintCallable)
    bool CountdownRelease();
    
    UFUNCTION(BlueprintCallable)
    bool CountdownPause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CountdownIsInitialized();
    
    UFUNCTION(BlueprintCallable)
    bool CountdownInitialize();
    
    UFUNCTION(BlueprintCallable)
    bool CountdownGetTime(int32& OutHours, int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CountdownGetSeconds();
    
    UFUNCTION(BlueprintCallable)
    bool CountdownGetProgressAndTime(int32& OutProgress, int32& OutHours, int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds);
    
    UFUNCTION(BlueprintCallable)
    bool CountdownGetProgressAndSeconds(int32& OutProgress, float& OutSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool CountdownGetProgressAndMilliseconds(int32& OutProgress, int32& OutMilliseconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CountdownGetMilliseconds();
    
};

