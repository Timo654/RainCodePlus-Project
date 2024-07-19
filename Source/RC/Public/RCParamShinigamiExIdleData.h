#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamShinigamiExIdleTableRow.h"
#include "RCParamShinigamiExIdleData.generated.h"

UCLASS(Blueprintable)
class URCParamShinigamiExIdleData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamShinigamiExIdleTableRow> Data;
    
    URCParamShinigamiExIdleData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

