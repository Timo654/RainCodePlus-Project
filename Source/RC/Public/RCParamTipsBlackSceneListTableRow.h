#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamTipsBlackSceneListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamTipsBlackSceneListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TipsNonSceneID;
    
    RC_API FRCParamTipsBlackSceneListTableRow();
};

