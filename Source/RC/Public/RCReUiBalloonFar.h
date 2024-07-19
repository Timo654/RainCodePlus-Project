#pragma once
#include "CoreMinimal.h"
#include "ESCBaloonFrame.h"
#include "ESCBaloonType.h"
#include "RCUiWidget3D.h"
#include "RCReUiBalloonFar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCReUiBalloonFar : public URCUiWidget3D {
    GENERATED_BODY()
public:
    URCReUiBalloonFar();

    UFUNCTION(BlueprintCallable)
    void SetBalloonData(ESCBaloonFrame InFrame, ESCBaloonType InIcon);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBalloon();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFarBalloonStatusInt();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

