#pragma once
#include "CoreMinimal.h"
#include "RCUserWidget.h"
#include "RCSaveLoadSelectLoopBase.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCSaveLoadSelectLoopBase : public URCUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Loop;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isLoopAnimation;
    
public:
    URCSaveLoadSelectLoopBase();

};

