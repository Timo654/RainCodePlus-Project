#pragma once
#include "CoreMinimal.h"
#include "RCRealPlayerController.h"
#include "RCNazoPlayerController.generated.h"

UCLASS(Blueprintable)
class RC_API ARCNazoPlayerController : public ARCRealPlayerController {
    GENERATED_BODY()
public:
    ARCNazoPlayerController(const FObjectInitializer& ObjectInitializer);

};

