#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamVoiceDataPathListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamVoiceDataPathListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CueSheetName;
    
    RC_API FRCParamVoiceDataPathListTableRow();
};

