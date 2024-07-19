#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamCharacterTagListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamCharacterTagListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    RC_API FRCParamCharacterTagListTableRow();
};

