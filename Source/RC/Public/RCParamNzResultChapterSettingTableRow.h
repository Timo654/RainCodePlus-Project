#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamNzResultChapterSettingTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamNzResultChapterSettingTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChapterImagePath;
    
    RC_API FRCParamNzResultChapterSettingTableRow();
};

