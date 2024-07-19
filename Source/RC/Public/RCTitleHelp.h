#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCTitleHelp.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCTitleHelp : public URCUiWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HelpText;
    
public:
    URCTitleHelp();

};

