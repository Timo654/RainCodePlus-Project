#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamAchievementTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamAchievementTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AchievementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OperationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    RC_API FRCParamAchievementTableRow();
};

