#include "RCGrassDeformer.h"

ARCGrassDeformer::ARCGrassDeformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeformCurve = NULL;
    this->CurrentTimer = 0.00f;
}

void ARCGrassDeformer::UpdateGrassTransform() {
}


