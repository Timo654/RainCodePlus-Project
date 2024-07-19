#pragma once
#include "CoreMinimal.h"
#include "ERCInputKeyType.h"
#include "RCUiWidgetBase.h"
#include "RCNzCriminalButtonGuide.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCNzCriminalButtonGuide : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCInputKeyType KeyType;
    
public:
    URCNzCriminalButtonGuide();

};

