#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiStaffRoll.generated.h"

class UCanvasPanel;
class URCStaffRollDataAsset;
class URCUiStaffRollBackground;
class URCUiStaffRollItem;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiStaffRoll : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MainCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiStaffRollBackground* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<URCUiStaffRollItem*> AllItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCStaffRollDataAsset* SettingData;
    
public:
    URCUiStaffRoll();

    UFUNCTION(BlueprintCallable)
    void StartStaffRoll();
    
    UFUNCTION(BlueprintCallable)
    void StartMovie();
    
    UFUNCTION(BlueprintCallable)
    void SetStaffRollDataAsset(URCStaffRollDataAsset* Data);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MovieFinishEvent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitializedStaffRoll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndScroll() const;
    
    UFUNCTION(BlueprintCallable)
    void InitStaffRoll(float StartTime, float EndTime, float SpaceSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovieStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFinishTime() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishStaffRoll();
    
};

