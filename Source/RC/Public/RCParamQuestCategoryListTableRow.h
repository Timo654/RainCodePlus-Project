#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamQuestCategoryListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamQuestCategoryListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestCategoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    RC_API FRCParamQuestCategoryListTableRow();
};

