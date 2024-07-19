#include "RCGrassTransformer.h"

ARCGrassTransformer::ARCGrassTransformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Component = NULL;
    this->bRemoveGrassFreshlyDeformedWhenStopUpdateInstance = false;
}


void ARCGrassTransformer::StopUpdateInstance(int32 InstanceIndex) {
}


void ARCGrassTransformer::StartUpdate() {
}


