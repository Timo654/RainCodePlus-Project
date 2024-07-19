#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCInstallBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCInstallBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCInstallBFL();

    UFUNCTION(BlueprintCallable)
    static bool IsInstallComplete();
    
};

