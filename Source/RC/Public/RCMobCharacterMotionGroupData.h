#pragma once
#include "CoreMinimal.h"
#include "RCCharacterMotionCategoryData.h"
#include "RCMobCharacterMotionGroupData.generated.h"

USTRUCT(BlueprintType)
struct FRCMobCharacterMotionGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCCharacterMotionCategoryData> MotionCategoryData;
    
    RC_API FRCMobCharacterMotionGroupData();
};

