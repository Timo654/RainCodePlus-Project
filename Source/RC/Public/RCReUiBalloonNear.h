#pragma once
#include "CoreMinimal.h"
#include "ESCBaloonFrame.h"
#include "RCUiWidgetAccessable.h"
#include "RCReUiBalloonNear.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiBalloonNear : public URCUiWidgetAccessable {
    GENERATED_BODY()
public:
    URCReUiBalloonNear();

    UFUNCTION(BlueprintCallable)
    void SetShakeData(float InWidthX, float InWidthY, float InInterval);
    
    UFUNCTION(BlueprintCallable)
    void SetBalloonData(ESCBaloonFrame InFrame, const FString& inString);
    
    UFUNCTION(BlueprintCallable)
    void Reduce();
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBalloon();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBalloonStatusNum();
    
    UFUNCTION(BlueprintCallable)
    void Enlarge();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

