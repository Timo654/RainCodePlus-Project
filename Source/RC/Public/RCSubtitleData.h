#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCSubtitleRowData.h"
#include "RCSubtitleData.generated.h"

USTRUCT(BlueprintType)
struct FRCSubtitleData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCSubtitleRowData> SubtitleDatas;
    
    RC_API FRCSubtitleData();
};

