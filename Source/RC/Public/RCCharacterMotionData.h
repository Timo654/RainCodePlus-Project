#pragma once
#include "CoreMinimal.h"
#include "RCCharacterMotionCategoryData.h"
#include "RCCharacterMotionData.generated.h"

USTRUCT(BlueprintType)
struct FRCCharacterMotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCCharacterMotionCategoryData> MotionCategoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MotionPathData;
    
    RC_API FRCCharacterMotionData();
};

