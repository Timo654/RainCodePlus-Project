#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamChapterListTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamChapterListTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChapterNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DlcType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StoryMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DlcIndex;
    
    RC_API FRCParamChapterListTableRow();
};

