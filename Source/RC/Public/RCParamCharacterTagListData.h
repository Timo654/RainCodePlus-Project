#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterTagListTableRow.h"
#include "RCParamCharacterTagListData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterTagListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterTagListTableRow> Data;
    
    URCParamCharacterTagListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

