#pragma once
#include "CoreMinimal.h"
#include "RCUiMenuCommonIcon.h"
#include "RCUiMenuSkillTreeIconEffect.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuSkillTreeIconEffect : public URCUiMenuCommonIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_On_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* An_Open_Start;
    
public:
    URCUiMenuSkillTreeIconEffect();

};

