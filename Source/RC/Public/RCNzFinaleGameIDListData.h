#pragma once
#include "CoreMinimal.h"
#include "RCNzFinaleGameIDListData.generated.h"

USTRUCT(BlueprintType)
struct FRCNzFinaleGameIDListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IdList;
    
    RC_API FRCNzFinaleGameIDListData();
};

