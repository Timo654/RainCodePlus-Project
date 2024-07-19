#include "RCAutoPlayActor.h"

ARCAutoPlayActor::ARCAutoPlayActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

ARCAutoPlayActor* ARCAutoPlayActor::AutoPlayActor2(const UObject* WorldContextObject, AActor* Target, const FVector& InDistPos, const FRotator& InDistRot, float Duration, bool IgnoreZ, ERCAutoPlayCompletionPred Completion) {
    return NULL;
}

ARCAutoPlayActor* ARCAutoPlayActor::AutoPlayActor(const UObject* WorldContextObject, AActor* Target, AActor* Dist, float Duration, bool IgnoreZ, ERCAutoPlayCompletionPred Completion) {
    return NULL;
}

void ARCAutoPlayActor::Abort() {
}


