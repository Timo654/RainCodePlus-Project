#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiFinaleBackgroundWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiFinaleBackgroundWidget : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCNzUiFinaleBackgroundWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeBackgroundImg(const UTexture2D* Texture);
    
};

