#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamTitleMenuListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamTitleMenuListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> switcherIndex;
    
    RC_API FRCParamTitleMenuListTableRow();
};

