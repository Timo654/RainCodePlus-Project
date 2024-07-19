#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamBombReleaseTableRow.h"
#include "RCParamBombReleaseData.generated.h"

UCLASS(Blueprintable)
class URCParamBombReleaseData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamBombReleaseTableRow> Data;
    
    URCParamBombReleaseData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

