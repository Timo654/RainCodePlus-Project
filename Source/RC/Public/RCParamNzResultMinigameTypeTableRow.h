#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamNzResultMinigameTypeTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamNzResultMinigameTypeTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MinigameEvalType;
    
    RC_API FRCParamNzResultMinigameTypeTableRow();
};

