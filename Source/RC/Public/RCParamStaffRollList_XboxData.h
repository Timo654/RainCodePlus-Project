#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamStaffRollList_XboxTableRow.h"
#include "RCParamStaffRollList_XboxData.generated.h"

UCLASS(Blueprintable)
class URCParamStaffRollList_XboxData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamStaffRollList_XboxTableRow> Data;
    
    URCParamStaffRollList_XboxData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

