#pragma once
#include "CoreMinimal.h"
#include "RCNzUiBattleKaiKagiSelectBar.h"
#include "RCNzUiBattleKaiKagiSelectedBar.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzUiBattleKaiKagiSelectedBar : public URCNzUiBattleKaiKagiSelectBar {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_KaikagiName_02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_KaikagiName_03;
    
public:
    URCNzUiBattleKaiKagiSelectedBar();

};

