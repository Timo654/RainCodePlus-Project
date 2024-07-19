#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamBgFileListTableRow.h"
#include "RCParamBgFileListData.generated.h"

UCLASS(Blueprintable)
class URCParamBgFileListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamBgFileListTableRow> Data;
    
    URCParamBgFileListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

