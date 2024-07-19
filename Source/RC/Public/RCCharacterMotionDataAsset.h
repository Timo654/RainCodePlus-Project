#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RCCharacterMotionData.h"
#include "RCMobCharacterMotionData.h"
#include "RCCharacterMotionDataAsset.generated.h"

UCLASS(Blueprintable)
class RC_API URCCharacterMotionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCCharacterMotionData> CharacterRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCMobCharacterMotionData> MobCharacterRecords;
    
    URCCharacterMotionDataAsset();

    UFUNCTION(BlueprintCallable)
    void Reimport();
    
};

