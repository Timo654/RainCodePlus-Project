#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCBgActorBFL.generated.h"

class ARCBgActor;

UCLASS(Blueprintable)
class RC_API URCBgActorBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCBgActorBFL();

    UFUNCTION(BlueprintCallable)
    static void SetVisibles(const FString& InActorName, bool bInVisible);
    
    UFUNCTION(BlueprintCallable)
    static void SetVisibility(FName InBgActorName, bool bVisibleFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVisibility(FName InBgActorName);
    
    UFUNCTION(BlueprintCallable)
    static ARCBgActor* GetBgActor(FName InBgActorName);
    
};

