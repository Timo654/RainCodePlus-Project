#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterDlcListTableRow.h"
#include "RCParamCharacterDlcListData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterDlcListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterDlcListTableRow> Data;
    
    URCParamCharacterDlcListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

