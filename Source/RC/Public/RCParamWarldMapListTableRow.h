#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamWarldMapListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamWarldMapListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WarldMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBusStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LinkWorldMapID;
    
    RC_API FRCParamWarldMapListTableRow();
};

