#pragma once
#include "CoreMinimal.h"
#include "RCCSVData.h"
#include "SCScriptDefineCommand.h"
#include "SCScriptDefineCommandDataAsset.generated.h"

UCLASS(Blueprintable)
class USCScriptDefineCommandDataAsset : public URCCSVData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSCScriptDefineCommand> Data;
    
    USCScriptDefineCommandDataAsset();

    UFUNCTION(BlueprintCallable)
    void Import();
    
};

