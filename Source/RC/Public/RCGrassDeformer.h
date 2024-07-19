#pragma once
#include "CoreMinimal.h"
#include "RCGrassTransformer.h"
#include "RCGrassDeformer.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class RC_API ARCGrassDeformer : public ARCGrassTransformer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DeformCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTimer;
    
    ARCGrassDeformer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGrassTransform();
    
};

