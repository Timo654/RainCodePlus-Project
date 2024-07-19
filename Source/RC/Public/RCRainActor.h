#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RCActor.h"
#include "RCRainActor.generated.h"

UCLASS(Blueprintable)
class RC_API ARCRainActor : public ARCActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float offsetHeight;
    
    ARCRainActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FVector GetPosition();
    
};

