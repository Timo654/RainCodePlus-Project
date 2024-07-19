#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamSkillEquipmentListTableRow.h"
#include "RCParamSkillEquipmentListData.generated.h"

UCLASS(Blueprintable)
class URCParamSkillEquipmentListData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamSkillEquipmentListTableRow> Data;
    
    URCParamSkillEquipmentListData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

