#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamFinaleTestTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamFinaleTestTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Heading;
    
    RC_API FRCParamFinaleTestTableRow();
};

