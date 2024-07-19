#pragma once
#include "CoreMinimal.h"
#include "RCUiInteractIconParts.h"
#include "RCUiInteractTalkDot.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiInteractTalkDot : public URCUiInteractIconParts {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Loop;
    
public:
    URCUiInteractTalkDot();

};

