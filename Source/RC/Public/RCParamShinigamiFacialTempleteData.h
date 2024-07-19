#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamShinigamiFacialTempleteTableRow.h"
#include "RCParamShinigamiFacialTempleteData.generated.h"

UCLASS(Blueprintable)
class URCParamShinigamiFacialTempleteData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamShinigamiFacialTempleteTableRow> Data;
    
    URCParamShinigamiFacialTempleteData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

