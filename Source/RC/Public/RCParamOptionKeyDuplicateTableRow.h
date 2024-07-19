#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERCInputKeyConfigType.h"
#include "RCParamOptionKeyDuplicateTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamOptionKeyDuplicateTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERCInputKeyConfigType> DuplicateCheckList;
    
    RC_API FRCParamOptionKeyDuplicateTableRow();
};

