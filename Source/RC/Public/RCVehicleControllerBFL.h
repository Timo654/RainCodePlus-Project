#pragma once
#include "CoreMinimal.h"
#include "RCBlueprintFunctionLibrary.h"
#include "RCVehicleControllerBFL.generated.h"

UCLASS(Blueprintable)
class RC_API URCVehicleControllerBFL : public URCBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URCVehicleControllerBFL();

    UFUNCTION(BlueprintCallable)
    static void SetVisible(bool IsVisible);
    
};

