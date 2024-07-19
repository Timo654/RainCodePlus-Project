#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterMaterialListTableRow.h"
#include "RCParamCharacterMaterialListData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterMaterialListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterMaterialListTableRow> Data;
    
    URCParamCharacterMaterialListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

