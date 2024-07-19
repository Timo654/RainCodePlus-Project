#pragma once
#include "CoreMinimal.h"
#include "RCActor.h"
#include "RCVehicleActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCVehicleActor : public ARCActor {
    GENERATED_BODY()
public:
    ARCVehicleActor(const FObjectInitializer& ObjectInitializer);

};

