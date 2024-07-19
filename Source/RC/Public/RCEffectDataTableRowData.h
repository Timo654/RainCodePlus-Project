#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "RCEffectDataTableRowData.generated.h"

USTRUCT(BlueprintType)
struct FRCEffectDataTableRowData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Path;
    
    RC_API FRCEffectDataTableRowData();
};

