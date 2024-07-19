#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamWanderingSpiritSpeedTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamWanderingSpiritSpeedTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    RC_API FRCParamWanderingSpiritSpeedTableRow();
};

