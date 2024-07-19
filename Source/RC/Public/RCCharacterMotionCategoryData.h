#pragma once
#include "CoreMinimal.h"
#include "RCCharacterMotionCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FRCCharacterMotionCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MotionCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionCategoryNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionCategoryIndex;
    
    RC_API FRCCharacterMotionCategoryData();
};

