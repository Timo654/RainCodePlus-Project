#pragma once
#include "CoreMinimal.h"
#include "RCMenuPlayerController.h"
#include "RCTitleEvalPlayerController.generated.h"

class URCEvaluationTitle;

UCLASS(Blueprintable)
class RC_API ARCTitleEvalPlayerController : public ARCMenuPlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCEvaluationTitle* TitleEvalWidget;
    
public:
    ARCTitleEvalPlayerController(const FObjectInitializer& ObjectInitializer);

};

