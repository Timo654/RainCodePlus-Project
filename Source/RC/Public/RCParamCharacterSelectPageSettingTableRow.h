#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamCharacterSelectPageSettingTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamCharacterSelectPageSettingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpperCharacterNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RowerCharacterNum;
    
    RC_API FRCParamCharacterSelectPageSettingTableRow();
};

