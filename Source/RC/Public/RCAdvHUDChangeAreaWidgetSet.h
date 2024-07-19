#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDChangeAreaWidgetSet.generated.h"

class URCUiIntArea;

USTRUCT(BlueprintType)
struct FRCAdvHUDChangeAreaWidgetSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiIntArea* Icon;
    
    RC_API FRCAdvHUDChangeAreaWidgetSet();
};

