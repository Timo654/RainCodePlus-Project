#pragma once
#include "CoreMinimal.h"
#include "RCMobCharacterMotionGroupData.h"
#include "RCMobCharacterMotionMapData.generated.h"

USTRUCT(BlueprintType)
struct FRCMobCharacterMotionMapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCMobCharacterMotionGroupData> MotionGroupData;
    
    RC_API FRCMobCharacterMotionMapData();
};

