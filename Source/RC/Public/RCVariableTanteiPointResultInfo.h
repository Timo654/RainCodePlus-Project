#pragma once
#include "CoreMinimal.h"
#include "RCVariableTanteiPointResultInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableTanteiPointResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chapter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TanteiPoint;
    
    FRCVariableTanteiPointResultInfo();
};

