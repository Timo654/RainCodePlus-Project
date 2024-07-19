#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamSaveLoadIconTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamSaveLoadIconTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chapter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImagePath;
    
    RC_API FRCParamSaveLoadIconTableRow();
};

