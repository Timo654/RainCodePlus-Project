#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzFinalePieceTableRow.h"
#include "RCParamNzFinalePieceData.generated.h"

UCLASS(Blueprintable)
class URCParamNzFinalePieceData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzFinalePieceTableRow> Data;
    
    URCParamNzFinalePieceData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

