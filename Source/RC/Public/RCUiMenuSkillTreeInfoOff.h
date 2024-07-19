#pragma once
#include "CoreMinimal.h"
#include "RCUiMenuCommonIcon.h"
#include "RCUiMenuSkillTreeInfoOff.generated.h"

class UTextLayoutWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuSkillTreeInfoOff : public URCUiMenuCommonIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_Order_Condition;
    
public:
    URCUiMenuSkillTreeInfoOff();

};

