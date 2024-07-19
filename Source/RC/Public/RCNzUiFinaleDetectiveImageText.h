#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleDetectiveImageText.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleDetectiveImageText : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
public:
    URCNzUiFinaleDetectiveImageText();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateText(const FString& str);
    
    UFUNCTION(BlueprintCallable)
    void InitializeText();
    
};

