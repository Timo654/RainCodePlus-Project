#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RCSplineActorBFL.generated.h"

class ARCSplineActor;

UCLASS(Blueprintable)
class RC_API URCSplineActorBFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCSplineActorBFL();

    UFUNCTION(BlueprintCallable)
    static ARCSplineActor* GetSplineActor(FName InName);
    
};

