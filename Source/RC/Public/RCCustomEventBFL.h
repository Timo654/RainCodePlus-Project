#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCCustomEventBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCCustomEventBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCCustomEventBFL();

    UFUNCTION(BlueprintCallable)
    static void OnEventStarts(const FString& InActorName, FName InEventName);
    
    UFUNCTION(BlueprintCallable)
    static bool OnEventStart(FName InActorName, FName InEventName);
    
};

