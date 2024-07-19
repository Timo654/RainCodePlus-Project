#pragma once
#include "CoreMinimal.h"
#include "RCGrassTransformParameter.h"
#include "RCGrassTransformer.h"
#include "RCGrassRippleTransformer.generated.h"

class ARCGrassRipple;

UCLASS(Blueprintable)
class RC_API ARCGrassRippleTransformer : public ARCGrassTransformer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARCGrassRipple* GrassRipple;
    
    ARCGrassRippleTransformer(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGrassTransform();
    
    UFUNCTION(BlueprintCallable)
    void MakeOriginalTransformArray(TMap<int32, FRCGrassTransformParameter>& OutTransformParameters);
    
};

