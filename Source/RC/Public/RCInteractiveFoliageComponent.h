#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FoliageInstancedStaticMeshComponent.h"
#include "ERCGrassStatus.h"
#include "RCInteractiveFoliageComponent.generated.h"

class ARCGrassTransformer;
class URCInteractiveFoliageComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCInteractiveFoliageComponent : public UFoliageInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> OriginalInstanceTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnDeformAtFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, ARCGrassTransformer*> Transformers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> WaitingToResumeGrowList;
    
public:
    URCInteractiveFoliageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopUpdateTransformerInstances(const TArray<int32>& Instances);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupOriginalTransformsToDevidedComponents(const FVector& UpperLeft, float ChunkSize, int32 ChunkAmountX, UPARAM(Ref) TArray<URCInteractiveFoliageComponent*>& ChunkedComponents);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveGrassTransformer(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGrassStatus(int32 InstanceIndex, ERCGrassStatus Status);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassUnTrampling(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassUnDeforming(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassTrampled(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassFreshlyDeformed(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassDeformed(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGrassChangingTransform(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetInstancesOverlappingMultiSphereTrace_InstancedStaticMesh(const FVector& Start, const FVector& End, float Radius);
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetInstancesOverlappingMultiSphereTrace_Hierarchial(const FVector& Start, const FVector& End, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrassWaitingToResumeGrowAlpha(int32 InstanceIndex) const;
    
    UFUNCTION(BlueprintCallable)
    ARCGrassTransformer* GetGrassTransformer(int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddGrassTransformer(int32 InstanceIndex, ARCGrassTransformer* Transformer);
    
    UFUNCTION(BlueprintCallable)
    void AddGrassStatus(int32 InstanceIndex, ERCGrassStatus Status);
    
};

