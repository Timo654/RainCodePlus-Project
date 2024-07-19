#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDResearchPointer_MouseControlData_Marker.generated.h"

USTRUCT(BlueprintType)
struct FRCAdvHUDResearchPointer_MouseControlData_Marker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawMarkerCircle;
    
    RC_API FRCAdvHUDResearchPointer_MouseControlData_Marker();
};

