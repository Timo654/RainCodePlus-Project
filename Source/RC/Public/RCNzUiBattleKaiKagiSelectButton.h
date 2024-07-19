#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleKaiKagiSelectButton.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiSelectButton : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_KaikagiName;
    
public:
    URCNzUiBattleKaiKagiSelectButton();

    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiSelectButton();
    
};

