#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCEventTriggerBFL.generated.h"

class ARCEventTrigger;

UCLASS(Blueprintable)
class RC_API URCEventTriggerBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCEventTriggerBFL();

    UFUNCTION(BlueprintCallable)
    static void SetCollisionEnable(FName InName, bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCollisionEnable(FName InName);
    
    UFUNCTION(BlueprintCallable)
    static ARCEventTrigger* GetEventTrigger(FName InName);
    
};

