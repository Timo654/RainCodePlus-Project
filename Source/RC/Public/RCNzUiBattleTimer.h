#pragma once
#include "CoreMinimal.h"
#include "ERCNzUiBattleTimerStatus.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleTimer.generated.h"

class UImage;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleTimer : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Img_NzTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* TimerImageMaterial;
    
public:
    URCNzUiBattleTimer();

    UFUNCTION(BlueprintCallable)
    void SetTime(float InTime, float InLimitTime);
    
    UFUNCTION(BlueprintCallable)
    void SetElapsedTime(float InElapsedTime, float InLimitTime);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleTimer();
    
    UFUNCTION(BlueprintCallable)
    ERCNzUiBattleTimerStatus GetBattleTimerStatus();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

