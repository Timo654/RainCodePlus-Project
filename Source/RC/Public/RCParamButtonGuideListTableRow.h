#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERCInputKeyType.h"
#include "RCParamButtonGuideListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamButtonGuideListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERCInputKeyType> KeyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> IsNotWithVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ButtonGuideNameID;
    
    RC_API FRCParamButtonGuideListTableRow();
};

