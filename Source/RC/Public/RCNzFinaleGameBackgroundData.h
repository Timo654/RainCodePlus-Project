#pragma once
#include "CoreMinimal.h"
#include "RCParamNzFinaleDetectiveBackgroundImageTableRow.h"
#include "RCNzFinaleGameBackgroundData.generated.h"

USTRUCT(BlueprintType)
struct FRCNzFinaleGameBackgroundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzFinaleDetectiveBackgroundImageTableRow> dataList;
    
    RC_API FRCNzFinaleGameBackgroundData();
};

