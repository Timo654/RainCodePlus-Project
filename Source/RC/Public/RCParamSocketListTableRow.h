#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamSocketListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamSocketListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachPlaceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    RC_API FRCParamSocketListTableRow();
};

