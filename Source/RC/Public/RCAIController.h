#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "RCAIController.generated.h"

UCLASS(Blueprintable)
class RC_API ARCAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AIName;
    
public:
    ARCAIController(const FObjectInitializer& ObjectInitializer);

};

