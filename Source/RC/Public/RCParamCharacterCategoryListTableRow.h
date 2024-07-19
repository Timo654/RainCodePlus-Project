#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamCharacterCategoryListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamCharacterCategoryListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterCategoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    RC_API FRCParamCharacterCategoryListTableRow();
};

