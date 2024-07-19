#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamNzFinaleDetectiveBackgroundImageTableRow.h"
#include "RCParamNzFinaleDetectiveBackgroundImageData.generated.h"

UCLASS(Blueprintable)
class URCParamNzFinaleDetectiveBackgroundImageData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCParamNzFinaleDetectiveBackgroundImageTableRow> Data;
    
    URCParamNzFinaleDetectiveBackgroundImageData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

