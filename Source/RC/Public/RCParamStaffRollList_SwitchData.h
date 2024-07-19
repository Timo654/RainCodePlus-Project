#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamStaffRollList_SwitchTableRow.h"
#include "RCParamStaffRollList_SwitchData.generated.h"

UCLASS(Blueprintable)
class URCParamStaffRollList_SwitchData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamStaffRollList_SwitchTableRow> Data;
    
    URCParamStaffRollList_SwitchData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

