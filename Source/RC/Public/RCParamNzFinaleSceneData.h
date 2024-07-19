#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzFinaleSceneTableRow.h"
#include "RCParamNzFinaleSceneData.generated.h"

UCLASS(Blueprintable)
class URCParamNzFinaleSceneData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzFinaleSceneTableRow> Data;
    
    URCParamNzFinaleSceneData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

