#include "RCKakiwariRender.h"
#include "RCDitherFadeComponent.h"

ARCKakiwariRender::ARCKakiwariRender(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DitherFadeComp = CreateDefaultSubobject<URCDitherFadeComponent>(TEXT("DitherFadeComp"));
    this->MotionIndex = 1.00f;
}

void ARCKakiwariRender::SetKakiwariMotionIndex(const int32 InMotionIndex) {
}

float ARCKakiwariRender::GetKakiwariMotionIndex() const {
    return 0.0f;
}


