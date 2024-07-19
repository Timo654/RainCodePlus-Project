#pragma once
#include "CoreMinimal.h"
#include "RCMenuPlayerController.h"
#include "RCTitlePlayerController.generated.h"

class URCTitleManager;

UCLASS(Blueprintable)
class RC_API ARCTitlePlayerController : public ARCMenuPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URCTitleManager* titleManager;
    
public:
    ARCTitlePlayerController(const FObjectInitializer& ObjectInitializer);

};

