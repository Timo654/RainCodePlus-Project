#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzPuzzleSceneTableRow.h"
#include "RCParamNzPuzzleSceneData.generated.h"

UCLASS(Blueprintable)
class URCParamNzPuzzleSceneData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzPuzzleSceneTableRow> Data;
    
    URCParamNzPuzzleSceneData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

