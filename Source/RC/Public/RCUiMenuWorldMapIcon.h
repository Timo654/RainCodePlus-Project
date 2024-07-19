#pragma once
#include "CoreMinimal.h"
#include "RCUiMenuCommonIcon.h"
#include "RCUiMenuWorldMapIcon.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuWorldMapIcon : public URCUiMenuCommonIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* AN_Close;
    
public:
    URCUiMenuWorldMapIcon();

};

