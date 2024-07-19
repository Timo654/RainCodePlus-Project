#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDEnterBuildingWidgetSet.generated.h"

class URCUiIntJoint;

USTRUCT(BlueprintType)
struct FRCAdvHUDEnterBuildingWidgetSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiIntJoint* Icon;
    
    RC_API FRCAdvHUDEnterBuildingWidgetSet();
};

