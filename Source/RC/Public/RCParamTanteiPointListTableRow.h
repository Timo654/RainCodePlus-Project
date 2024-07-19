#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamTanteiPointListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamTanteiPointListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TanteiPointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GetNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Duplication;
    
    RC_API FRCParamTanteiPointListTableRow();
};

