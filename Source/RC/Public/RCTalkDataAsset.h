#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCTalkData.h"
#include "RCTalkDataAsset.generated.h"

UCLASS(Blueprintable)
class URCTalkDataAsset : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCTalkData> DataMap;
    
    URCTalkDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

