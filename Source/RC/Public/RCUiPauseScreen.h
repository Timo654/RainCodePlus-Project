#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiPauseScreen.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiPauseScreen : public URCUiWidgetBase {
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
    URCUiPauseScreen();

};

