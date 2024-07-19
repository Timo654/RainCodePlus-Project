#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzCriminalTableRow.h"
#include "RCParamNzCriminalData.generated.h"

UCLASS(Blueprintable)
class URCParamNzCriminalData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzCriminalTableRow> Data;
    
    URCParamNzCriminalData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

