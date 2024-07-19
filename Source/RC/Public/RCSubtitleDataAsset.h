#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCSubtitleData.h"
#include "RCSubtitleDataAsset.generated.h"

UCLASS(Blueprintable)
class URCSubtitleDataAsset : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCSubtitleData> DataMap;
    
    URCSubtitleDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

