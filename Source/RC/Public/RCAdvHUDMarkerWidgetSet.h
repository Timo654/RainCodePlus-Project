#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDMarkerWidgetSet.generated.h"

class URCUiIntTarget;

USTRUCT(BlueprintType)
struct FRCAdvHUDMarkerWidgetSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiIntTarget* Marker;
    
    RC_API FRCAdvHUDMarkerWidgetSet();
};

