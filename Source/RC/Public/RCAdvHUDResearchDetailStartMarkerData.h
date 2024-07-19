#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDResearchDetailStartMarkerData.generated.h"

class ARCCheckActor;

USTRUCT(BlueprintType)
struct FRCAdvHUDResearchDetailStartMarkerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCCheckActor* CheckActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResearched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale3D;
    
    RC_API FRCAdvHUDResearchDetailStartMarkerData();
};

