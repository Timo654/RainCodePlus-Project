#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamTanteiPointListTableRow.h"
#include "RCParamTanteiPointListData.generated.h"

UCLASS(Blueprintable)
class URCParamTanteiPointListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamTanteiPointListTableRow> Data;
    
    URCParamTanteiPointListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

