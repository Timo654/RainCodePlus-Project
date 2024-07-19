#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamGlossaryCategoryListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamGlossaryCategoryListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GlossaryCategoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    RC_API FRCParamGlossaryCategoryListTableRow();
};

