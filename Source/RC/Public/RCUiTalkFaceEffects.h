#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiTalkFaceEffects.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiTalkFaceEffects : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
public:
    URCUiTalkFaceEffects();

};
