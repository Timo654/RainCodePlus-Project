#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamOptionControllerTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamOptionControllerTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlatformID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ControllerTextIDList;
    
    RC_API FRCParamOptionControllerTableRow();
};

