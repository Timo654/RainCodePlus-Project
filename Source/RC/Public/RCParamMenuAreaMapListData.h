#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamMenuAreaMapListTableRow.h"
#include "RCParamMenuAreaMapListData.generated.h"

UCLASS(Blueprintable)
class URCParamMenuAreaMapListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamMenuAreaMapListTableRow> Data;
    
    URCParamMenuAreaMapListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

