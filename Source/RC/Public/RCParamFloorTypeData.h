#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamFloorTypeTableRow.h"
#include "RCParamFloorTypeData.generated.h"

UCLASS(Blueprintable)
class URCParamFloorTypeData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamFloorTypeTableRow> Data;
    
    URCParamFloorTypeData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

