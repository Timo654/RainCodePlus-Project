#pragma once
#include "CoreMinimal.h"
#include "CascadeRainDataTableRow.h"
#include "RCCSVData.h"
#include "CascadeRainDataData.generated.h"

UCLASS(Blueprintable)
class UCascadeRainDataData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCascadeRainDataTableRow> Data;
    
    UCascadeRainDataData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

