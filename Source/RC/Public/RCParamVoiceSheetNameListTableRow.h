#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamVoiceSheetNameListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamVoiceSheetNameListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SheetName;
    
    RC_API FRCParamVoiceSheetNameListTableRow();
};

