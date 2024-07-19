#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "RCParamFinaleTest.generated.h"

UCLASS(Blueprintable)
class RC_API URCParamFinaleTest : public URCCSVData {
    GENERATED_BODY()
public:
    URCParamFinaleTest();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

