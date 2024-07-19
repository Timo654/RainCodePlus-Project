#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCTalkRowData.h"
#include "RCTalkData.generated.h"

USTRUCT(BlueprintType)
struct FRCTalkData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCTalkRowData> TalkDatas;
    
    RC_API FRCTalkData();
};

