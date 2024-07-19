#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiMenuGlossary.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuGlossary : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_On;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Flame_In;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Flame_Out;
    
public:
    URCUiMenuGlossary();

};
