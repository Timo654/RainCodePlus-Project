#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamBgListL01TableRow.h"
#include "RCParamBgListL01Data.generated.h"

UCLASS(Blueprintable)
class URCParamBgListL01Data : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamBgListL01TableRow> Data;
    
    URCParamBgListL01Data();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

