#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamAchievementTableRow.h"
#include "RCParamAchievementData.generated.h"

UCLASS(Blueprintable)
class URCParamAchievementData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamAchievementTableRow> Data;
    
    URCParamAchievementData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

