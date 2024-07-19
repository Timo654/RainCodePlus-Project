#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCReUiShinigamiBalloon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiShinigamiBalloon : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSetText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoPlay;
    
public:
    URCReUiShinigamiBalloon();

    UFUNCTION(BlueprintCallable)
    void WaitOutside();
    
    UFUNCTION(BlueprintCallable)
    void SetShakeData(float InWidthX, float InWidthY, float InInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetBalloonData(const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    void SetAuto(bool bInIsAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeShinigamiBalloon();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void ClearText();
    
};

