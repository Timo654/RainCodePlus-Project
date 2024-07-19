#include "RCSplineActor.h"
#include "Components/SplineComponent.h"

ARCSplineActor::ARCSplineActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
}

bool ARCSplineActor::GetSplineTransform(FTransform& OutTransform, float& InOutDistance, float InSpeed, bool bInLoop) {
    return false;
}

bool ARCSplineActor::GetSplineLocationAndRotate(FVector& OutLocation, FRotator& OutRotate, float& InOutDistance, float InSpeed, bool bInLoop) {
    return false;
}

bool ARCSplineActor::GetSplineLocation(FVector& OutLocation, float& InOutDistance, float InSpeed, bool bInLoop) {
    return false;
}

float ARCSplineActor::GetSplineDistanceMax() {
    return 0.0f;
}


