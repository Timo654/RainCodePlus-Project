#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleLowSpeedBTNGuide.generated.h"

class URCUiButtonGuideParts;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleLowSpeedBTNGuide : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiButtonGuideParts* ButtonGuideParts;
    
public:
    URCNzUiFinaleLowSpeedBTNGuide();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOnAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOffAnim();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeButtonGuide(ERCInputKeyType InKeyType, const FString& str);
    
};

