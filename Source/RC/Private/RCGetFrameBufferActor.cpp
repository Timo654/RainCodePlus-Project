#include "RCGetFrameBufferActor.h"

ARCGetFrameBufferActor::ARCGetFrameBufferActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaterialInstanceDynamic = NULL;
    this->CaptureFrameTexture = NULL;
    this->AutoCapture = false;
}

void ARCGetFrameBufferActor::StopFrameGrab() {
}

bool ARCGetFrameBufferActor::StartFrameGrab() {
    return false;
}

void ARCGetFrameBufferActor::SetTriming(FVector Min, FVector Max) {
}

void ARCGetFrameBufferActor::SetOnlyColor(FColor col) {
}

void ARCGetFrameBufferActor::SetMaterialInstanceDynamic(UMaterialInstanceDynamic* MI) {
}

void ARCGetFrameBufferActor::ReSetTriming() {
}

void ARCGetFrameBufferActor::ReSetOnlyColor() {
}


