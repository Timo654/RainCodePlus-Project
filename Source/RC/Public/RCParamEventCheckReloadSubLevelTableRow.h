#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamEventCheckReloadSubLevelTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamEventCheckReloadSubLevelTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    RC_API FRCParamEventCheckReloadSubLevelTableRow();
};

