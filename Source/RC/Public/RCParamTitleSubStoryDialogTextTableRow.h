#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamTitleSubStoryDialogTextTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamTitleSubStoryDialogTextTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartCheck;
    
    RC_API FRCParamTitleSubStoryDialogTextTableRow();
};

