#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCNzUiBattleKaiKagiName.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiName : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_kaikagiName;
    
public:
    URCNzUiBattleKaiKagiName();

    UFUNCTION(BlueprintCallable)
    void SetKaiKagiName(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    void InitializeBattleKaiKagiName();
    
};

