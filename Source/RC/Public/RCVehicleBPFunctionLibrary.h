#pragma once
#include "CoreMinimal.h"
#include "ECrossWalkSignalType.h"
#include "RCBlueprintFunctionLibrary.h"
#include "RCVehicleBPFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class RC_API URCVehicleBPFunctionLibrary : public URCBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCVehicleBPFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetCrossWalkTriggerBox(AActor* crossWalkTrigger);
    
    UFUNCTION(BlueprintCallable)
    static void SetCrossWalkSignal(ECrossWalkSignalType signalType);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetPlayerActor();
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetCrossWalkTriggerBox();
    
    UFUNCTION(BlueprintCallable)
    static ECrossWalkSignalType GetCrossWalkSignal();
    
};

