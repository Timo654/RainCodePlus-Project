#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCKusariBlueprintFunctionLibrary.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class RC_API URCKusariBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCKusariBlueprintFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static bool SetChainParam(FVector Gravity, float Drag);
    
    UFUNCTION(BlueprintCallable)
    static bool CorrectChainAuto(bool On);
    
    UFUNCTION(BlueprintCallable)
    static bool CorrectChain(UNiagaraComponent* NiagaraTemplate);
    
};

