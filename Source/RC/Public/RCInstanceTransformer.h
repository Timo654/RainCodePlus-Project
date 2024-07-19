#pragma once
#include "CoreMinimal.h"
#include "RCGrassTransformer.h"
#include "RCInstanceTransformer.generated.h"

UCLASS(Blueprintable)
class RC_API ARCInstanceTransformer : public ARCGrassTransformer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAlpha;
    
    ARCInstanceTransformer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGrassTransform();
    
};

