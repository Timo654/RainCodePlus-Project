#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamInputKeyTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamInputKeyTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputKeyTypeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputKeyConfigTypeID;
    
    RC_API FRCParamInputKeyTableRow();
};

