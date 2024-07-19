#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCParamChapterNameTableRow.generated.h"

USTRUCT(BlueprintType)
struct FRCParamChapterNameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChapterNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChapterNumberID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChapterTextID;
    
    RC_API FRCParamChapterNameTableRow();
};

