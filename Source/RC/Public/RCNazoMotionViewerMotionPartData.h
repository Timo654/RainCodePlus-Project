#pragma once
#include "CoreMinimal.h"
#include "RCNazoMotionViewerMotionPartData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMotionViewerMotionPartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeNextTime;
    
    RC_API FRCNazoMotionViewerMotionPartData();
};

