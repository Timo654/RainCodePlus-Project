#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiStaffRollBackground.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiStaffRollBackground : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Finish;
    
public:
    URCUiStaffRollBackground();

};

