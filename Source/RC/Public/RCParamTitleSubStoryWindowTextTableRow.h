#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamTitleSubStoryWindowTextTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamTitleSubStoryWindowTextTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Continue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoadGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NewGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Return;
    
    RC_API FRCParamTitleSubStoryWindowTextTableRow();
};

