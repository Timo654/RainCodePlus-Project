#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamSoundFormatTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamSoundFormatTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IdFormat;
    
    RC_API FRCParamSoundFormatTableRow();
};

