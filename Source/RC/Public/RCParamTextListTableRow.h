#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamTextListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamTextListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FolderName;
    
    RC_API FRCParamTextListTableRow();
};

