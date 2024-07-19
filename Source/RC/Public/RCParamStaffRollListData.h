#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamStaffRollListTableRow.h"
#include "RCParamStaffRollListData.generated.h"

UCLASS(Blueprintable)
class URCParamStaffRollListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamStaffRollListTableRow> Data;
    
    URCParamStaffRollListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

