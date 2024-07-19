#pragma once
#include "CoreMinimal.h"
#include "RCUiMenuAreaMapIcon.h"
#include "RCUiMenuAreaMapIconArrow.generated.h"

class UTextLayoutWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuAreaMapIconArrow : public URCUiMenuAreaMapIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Txt_MoveArea;
    
public:
    URCUiMenuAreaMapIconArrow();

};

