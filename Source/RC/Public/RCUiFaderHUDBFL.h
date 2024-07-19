#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCUiFaderHUDBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCUiFaderHUDBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCUiFaderHUDBFL();

    UFUNCTION(BlueprintCallable)
    static void SetAllWidgetsHiddenEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAllWidgetsHidden(bool bAllWidgetsHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAllWidgetsHiddenEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAllWidgetsHidden();
    
};

