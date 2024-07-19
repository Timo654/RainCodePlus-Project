#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamOptionCommonTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamOptionCommonTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    RC_API FRCParamOptionCommonTableRow();
};

