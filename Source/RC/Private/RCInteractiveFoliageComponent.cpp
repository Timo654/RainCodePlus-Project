#include "RCInteractiveFoliageComponent.h"

URCInteractiveFoliageComponent::URCInteractiveFoliageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUnDeformAtFinished = true;
}

void URCInteractiveFoliageComponent::StopUpdateTransformerInstances(const TArray<int32>& Instances) {
}

void URCInteractiveFoliageComponent::SetupOriginalTransformsToDevidedComponents(const FVector& UpperLeft, float ChunkSize, int32 ChunkAmountX, TArray<URCInteractiveFoliageComponent*>& ChunkedComponents) {
}

void URCInteractiveFoliageComponent::RemoveGrassTransformer(int32 InstanceIndex) {
}

void URCInteractiveFoliageComponent::RemoveGrassStatus(int32 InstanceIndex, ERCGrassStatus Status) {
}

bool URCInteractiveFoliageComponent::IsGrassUnTrampling(int32 InstanceIndex) {
    return false;
}

bool URCInteractiveFoliageComponent::IsGrassUnDeforming(int32 InstanceIndex) {
    return false;
}

bool URCInteractiveFoliageComponent::IsGrassTrampled(int32 InstanceIndex) {
    return false;
}

bool URCInteractiveFoliageComponent::IsGrassFreshlyDeformed(int32 InstanceIndex) {
    return false;
}

bool URCInteractiveFoliageComponent::IsGrassDeformed(int32 InstanceIndex) {
    return false;
}

bool URCInteractiveFoliageComponent::IsGrassChangingTransform(int32 InstanceIndex) {
    return false;
}

TArray<int32> URCInteractiveFoliageComponent::GetInstancesOverlappingMultiSphereTrace_InstancedStaticMesh(const FVector& Start, const FVector& End, float Radius) {
    return TArray<int32>();
}

TArray<int32> URCInteractiveFoliageComponent::GetInstancesOverlappingMultiSphereTrace_Hierarchial(const FVector& Start, const FVector& End, float Radius) {
    return TArray<int32>();
}

float URCInteractiveFoliageComponent::GetGrassWaitingToResumeGrowAlpha(int32 InstanceIndex) const {
    return 0.0f;
}

ARCGrassTransformer* URCInteractiveFoliageComponent::GetGrassTransformer(int32 InstanceIndex) {
    return NULL;
}

void URCInteractiveFoliageComponent::AddGrassTransformer(int32 InstanceIndex, ARCGrassTransformer* Transformer) {
}

void URCInteractiveFoliageComponent::AddGrassStatus(int32 InstanceIndex, ERCGrassStatus Status) {
}


