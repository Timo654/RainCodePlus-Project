#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "SCScriptCommand.h"
#include "SCCommandDataAsset.generated.h"

UCLASS(Blueprintable)
class USCCommandDataAsset : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCScriptCommand> Data;
    
    USCCommandDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

