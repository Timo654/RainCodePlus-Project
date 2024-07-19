#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamNzResultReasoningPointTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamNzResultReasoningPointTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank_SS_ReasoningPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank_S_ReasoningPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank_A_ReasoningPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank_B_ReasoningPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank_C_ReasoningPoint;
    
    RC_API FRCParamNzResultReasoningPointTableRow();
};

