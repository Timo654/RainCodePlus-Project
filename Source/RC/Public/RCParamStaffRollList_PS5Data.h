#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamStaffRollList_PS5TableRow.h"
#include "RCParamStaffRollList_PS5Data.generated.h"

UCLASS(Blueprintable)
class URCParamStaffRollList_PS5Data : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamStaffRollList_PS5TableRow> Data;
    
    URCParamStaffRollList_PS5Data();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

