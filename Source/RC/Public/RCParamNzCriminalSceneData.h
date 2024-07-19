#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzCriminalSceneTableRow.h"
#include "RCParamNzCriminalSceneData.generated.h"

UCLASS(Blueprintable)
class URCParamNzCriminalSceneData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzCriminalSceneTableRow> Data;
    
    URCParamNzCriminalSceneData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

