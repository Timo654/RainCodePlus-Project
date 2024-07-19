#pragma once
#include "CoreMinimal.h"
#include "RCMenuPlayerController.h"
#include "RCTitleProtPlayerController.generated.h"

class URCTitleProtManager;

UCLASS(Blueprintable)
class RC_API ARCTitleProtPlayerController : public ARCMenuPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTitleProtManager* TitleProtManager;
    
public:
    ARCTitleProtPlayerController(const FObjectInitializer& ObjectInitializer);

};

