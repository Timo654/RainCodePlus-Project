#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamNzResultMinigameTextTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamNzResultMinigameTextTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MinigameTextId;
    
    RC_API FRCParamNzResultMinigameTextTableRow();
};

