#pragma once
#include "CoreMinimal.h"
#include "RCAdvHUDResearchDetailStartMarkerData.h"
#include "RCAdvHUDResearchDetailStartData.generated.h"

USTRUCT(BlueprintType)
struct FRCAdvHUDResearchDetailStartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDResearchDetailStartMarkerData> MarkerDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultMarkerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Marker3DScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestionTextID;
    
    RC_API FRCAdvHUDResearchDetailStartData();
};

