#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamOptionSoundTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamOptionSoundTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    RC_API FRCParamOptionSoundTableRow();
};

