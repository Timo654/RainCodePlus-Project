#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterModelListTableRow.h"
#include "RCParamCharacterModelListData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterModelListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterModelListTableRow> Data;
    
    URCParamCharacterModelListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

