#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterMotionTemplateTableRow.h"
#include "RCParamCharacterMotionTemplateData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterMotionTemplateData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterMotionTemplateTableRow> Data;
    
    URCParamCharacterMotionTemplateData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

