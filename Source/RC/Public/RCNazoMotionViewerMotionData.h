#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RCNazoMotionViewerMotionPartData.h"
#include "RCNazoMotionViewerMotionData.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMotionViewerMotionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoMotionViewerMotionPartData> MotionList;
    
    RC_API FRCNazoMotionViewerMotionData();
};

