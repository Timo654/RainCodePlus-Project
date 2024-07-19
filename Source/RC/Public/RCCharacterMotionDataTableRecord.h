#pragma once
#include "CoreMinimal.h"
#include "EMotionSplitType.h"
#include "RCCharacterMotionDataTableRecord.generated.h"

USTRUCT(BlueprintType)
struct FRCCharacterMotionDataTableRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMotionSplitType SplitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    RC_API FRCCharacterMotionDataTableRecord();
};

