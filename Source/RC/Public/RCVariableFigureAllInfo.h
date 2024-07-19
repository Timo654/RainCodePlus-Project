#pragma once
#include "CoreMinimal.h"
#include "RCVariableFigureInfo.h"
#include "RCVariableFigureAllInfo.generated.h"

USTRUCT(BlueprintType)
struct RC_API FRCVariableFigureAllInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCVariableFigureInfo> FigureInfoList;
    
    FRCVariableFigureAllInfo();
};

