#pragma once
#include "CoreMinimal.h"
#include "RCMobCharacterMotionMapData.h"
#include "RCMobCharacterMotionData.generated.h"

USTRUCT(BlueprintType)
struct FRCMobCharacterMotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCMobCharacterMotionMapData> MotionMapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MotionPathData;
    
    RC_API FRCMobCharacterMotionData();
};

