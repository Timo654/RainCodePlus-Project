#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleKaiKagiButton.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiButton : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_KaikagiName;
    
public:
    URCNzUiBattleKaiKagiButton();

    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiButton();
    
};

