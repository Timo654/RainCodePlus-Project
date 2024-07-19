#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzMTBWallMeshTableRow.h"
#include "RCParamNzMTBWallMeshData.generated.h"

UCLASS(Blueprintable)
class URCParamNzMTBWallMeshData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzMTBWallMeshTableRow> Data;
    
    URCParamNzMTBWallMeshData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

