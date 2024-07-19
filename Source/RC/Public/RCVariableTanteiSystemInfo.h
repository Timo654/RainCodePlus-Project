#pragma once
#include "CoreMinimal.h"
#include "RCVariableTanteiPointResultInfo.h"
#include "RCVariableTanteiSystemInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableTanteiSystemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalTanteiPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TanteiRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TanteiPointCheckList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableTanteiPointResultInfo> ResultList;
    
    FRCVariableTanteiSystemInfo();
};

