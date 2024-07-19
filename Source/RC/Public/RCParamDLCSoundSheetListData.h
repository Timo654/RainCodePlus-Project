#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamDLCSoundSheetListTableRow.h"
#include "RCParamDLCSoundSheetListData.generated.h"

UCLASS(Blueprintable)
class URCParamDLCSoundSheetListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamDLCSoundSheetListTableRow> Data;
    
    URCParamDLCSoundSheetListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

