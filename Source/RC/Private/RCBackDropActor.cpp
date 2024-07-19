#include "RCBackDropActor.h"

ARCBackDropActor::ARCBackDropActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float ARCBackDropActor::RGBA2Hight(FVector4 col) {
    return 0.0f;
}

void ARCBackDropActor::Reflesh() {
}

bool ARCBackDropActor::NeedScap() {
    return false;
}

void ARCBackDropActor::MakeScanMap(FVector Pos, int32 startX, int32 startY, int32 endX, int32 endY, int32 BrockSizeX, int32 BrockSizeY) {
}

void ARCBackDropActor::Bake(int32 brockSize) {
}

void ARCBackDropActor::AddPoint(FVector Pos, float W, float H, int32 Xbrock, int32 Ybrock) {
}


