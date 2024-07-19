#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamOptionGraphicsTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamOptionGraphicsTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    RC_API FRCParamOptionGraphicsTableRow();
};

