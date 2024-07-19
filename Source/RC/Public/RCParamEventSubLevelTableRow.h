#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamEventSubLevelTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamEventSubLevelTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelFilename;
    
    RC_API FRCParamEventSubLevelTableRow();
};

