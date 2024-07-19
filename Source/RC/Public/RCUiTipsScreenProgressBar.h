#pragma once
#include "CoreMinimal.h"
#include "RCUiWidgetBase.h"
#include "RCUiTipsScreenProgressBar.generated.h"

class USpUIGauge;

UCLASS(Blueprintable, EditInlineNew)
class RC_API URCUiTipsScreenProgressBar : public URCUiWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpUIGauge* SpGauge_ProgressBar;
    
public:
    URCUiTipsScreenProgressBar();

};

