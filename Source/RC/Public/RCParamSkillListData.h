#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSkillListTableRow.h"
#include "RCParamSkillListData.generated.h"

UCLASS(Blueprintable)
class URCParamSkillListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSkillListTableRow> Data;
    
    URCParamSkillListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

