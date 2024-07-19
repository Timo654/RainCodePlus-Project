#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RCCharacterMasterBasicContentMotionName.h"
#include "RCCharacterMotionContent.h"
#include "RCCharacterMotionUniqueContentScene.h"
#include "RCCharacterMotionListDataAsset.generated.h"

UCLASS(Blueprintable)
class RC_API URCCharacterMotionListDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCCharacterMasterBasicContentMotionName> MasterBasicRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCCharacterMotionContent> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCCharacterMotionUniqueContentScene> UniqueRecords;
    
    URCCharacterMotionListDataAsset();

    UFUNCTION(BlueprintCallable)
    void Reimport();
    
};

