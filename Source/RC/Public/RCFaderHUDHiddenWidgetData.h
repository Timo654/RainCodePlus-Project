#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "RCFaderHUDHiddenWidgetData.generated.h"

class URCUiWidgetBase;

USTRUCT(BlueprintType)
struct FRCFaderHUDHiddenWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiWidgetBase* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility PrevSlateVisibility;
    
    RC_API FRCFaderHUDHiddenWidgetData();
};

