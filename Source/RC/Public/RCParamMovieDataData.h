#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamMovieDataTableRow.h"
#include "RCParamMovieDataData.generated.h"

UCLASS(Blueprintable)
class URCParamMovieDataData : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCParamMovieDataTableRow> Data;
    
    URCParamMovieDataData();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

