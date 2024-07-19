#include "RCRainMaker.h"

ARCRainMaker::ARCRainMaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->offsetDropRain = -88.00f;
}

void ARCRainMaker::SetRainRotate(FRotator Rot) {
}

bool ARCRainMaker::SetRainLinearColorDirect(FName Name, FLinearColor col) {
    return false;
}

void ARCRainMaker::SetRainForce(int32 paw) {
}

bool ARCRainMaker::SetRainColorDirect(FName Name, FName aname, FVector4 col) {
    return false;
}

bool ARCRainMaker::SetRainColor(FName Name) {
    return false;
}

void ARCRainMaker::SetHiddenRain(bool isHidden) {
}

void ARCRainMaker::SetHiddenOutRain(bool isHidden) {
}

bool ARCRainMaker::SetCascadeRainColorDirect(FName Map, FName Param, FName aname, FVector col, float A, FName Tag) {
    return false;
}

bool ARCRainMaker::SetCascadeRainColor(FName Map, FName Param) {
    return false;
}


