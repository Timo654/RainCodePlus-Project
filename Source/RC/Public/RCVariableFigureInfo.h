#pragma once
#include "CoreMinimal.h"
#include "RCVariableFigureInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableFigureInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PersonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FigureNum;
    
    FRCVariableFigureInfo();
};

