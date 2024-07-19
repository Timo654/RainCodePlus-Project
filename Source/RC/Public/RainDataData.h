#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RainDataTableRow.h"
#include "RainDataData.generated.h"

UCLASS(Blueprintable)
class URainDataData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRainDataTableRow> Data;
    
    URainDataData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

