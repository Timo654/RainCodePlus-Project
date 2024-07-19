#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamChapterSelectDialogTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamChapterSelectDialogTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DialogSelectText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InstallingDialog;
    
    RC_API FRCParamChapterSelectDialogTableRow();
};

