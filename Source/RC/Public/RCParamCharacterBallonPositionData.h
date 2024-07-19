#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamCharacterBallonPositionTableRow.h"
#include "RCParamCharacterBallonPositionData.generated.h"

UCLASS(Blueprintable)
class URCParamCharacterBallonPositionData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamCharacterBallonPositionTableRow> Data;
    
    URCParamCharacterBallonPositionData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

