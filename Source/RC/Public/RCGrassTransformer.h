#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RCGrassTransformParameter.h"
#include "RCGrassTransformer.generated.h"

class URCInteractiveFoliageComponent;

UCLASS(Blueprintable)
class RC_API ARCGrassTransformer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCInteractiveFoliageComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FRCGrassTransformParameter> TransformParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveGrassFreshlyDeformedWhenStopUpdateInstance;
    
    ARCGrassTransformer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopUpdateManagement();
    
    UFUNCTION(BlueprintCallable)
    void StopUpdateInstance(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartUpdateManagement();
    
    UFUNCTION(BlueprintCallable)
    void StartUpdate();
    
};

