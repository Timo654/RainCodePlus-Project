#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamFigureTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamFigureTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PersonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FigureNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FigureHintTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> EpName;
    
    RC_API FRCParamFigureTableRow();
};

