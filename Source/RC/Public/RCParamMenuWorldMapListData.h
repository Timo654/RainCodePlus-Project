#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamMenuWorldMapListTableRow.h"
#include "RCParamMenuWorldMapListData.generated.h"

UCLASS(Blueprintable)
class URCParamMenuWorldMapListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamMenuWorldMapListTableRow> Data;
    
    URCParamMenuWorldMapListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

