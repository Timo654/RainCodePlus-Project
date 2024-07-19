#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCUiMenuCharacterTop.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuCharacterTop : public URCUiWidgetBase {
    GENERATED_BODY()
public:
    URCUiMenuCharacterTop();

    UFUNCTION(BlueprintCallable)
    void NotifyCloseCharacterViewerWrap(ERCInputKeyType InKeyType);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCloseCharacterMenuWrap(ERCInputKeyType InKeyType);
    
    UFUNCTION(BlueprintCallable)
    void FinishedCharacterViewer();
    
};

