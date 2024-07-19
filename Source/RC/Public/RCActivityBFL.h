#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCActivityBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCActivityBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCActivityBFL();

    UFUNCTION(BlueprintCallable)
    static void SetActivityExecProcess();
    
    UFUNCTION(BlueprintCallable)
    static bool GetActivityContinue();
    
    UFUNCTION(BlueprintCallable)
    static void ActivityStart();
    
    UFUNCTION(BlueprintCallable)
    static void ActivityEnd();
    
};

