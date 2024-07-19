#pragma once
#include "CoreMinimal.h"
#include "RCPlayerController.h"
#include "RCMenuPlayerController.generated.h"

UCLASS(Blueprintable)
class RC_API ARCMenuPlayerController : public ARCPlayerController {
    GENERATED_BODY()
public:
    ARCMenuPlayerController(const FObjectInitializer& ObjectInitializer);

};

