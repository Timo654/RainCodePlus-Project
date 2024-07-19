#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamSubQuestTextTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamSubQuestTextTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OrderStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OrderComplete;
    
    RC_API FRCParamSubQuestTextTableRow();
};

