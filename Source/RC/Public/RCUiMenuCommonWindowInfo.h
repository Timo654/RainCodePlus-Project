#pragma once
#include "CoreMinimal.h"
#include "RCUiMenuCommonIcon.h"
#include "RCUiMenuCommonWindowInfo.generated.h"

class UTextLayoutWidget;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiMenuCommonWindowInfo : public URCUiMenuCommonIcon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_Information;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextLayoutWidget* Text_Info;
    
public:
    URCUiMenuCommonWindowInfo();

};

