#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterInfoListTableRow.h"
#include "RCParamCharacterInfoListData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterInfoListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterInfoListTableRow> Data;
    
    URCParamCharacterInfoListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

