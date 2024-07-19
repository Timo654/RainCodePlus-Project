#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamLevelListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamLevelListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    RC_API FRCParamLevelListTableRow();
};

