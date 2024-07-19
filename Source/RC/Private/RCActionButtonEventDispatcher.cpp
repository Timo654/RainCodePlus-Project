#include "RCActionButtonEventDispatcher.h"

ARCActionButtonEventDispatcher::ARCActionButtonEventDispatcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ARCActionButtonEventDispatcher::CallOnPending(FName ID, ARCActionButton* Actor, int32 Times) {
}

void ARCActionButtonEventDispatcher::CallOnPassed(FName ID, ARCActionButton* Actor) {
}

void ARCActionButtonEventDispatcher::CallOnFailed(FName ID, ARCActionButton* Actor, ERCActionFailureReason reason) {
}

void ARCActionButtonEventDispatcher::CallOnDeadline() {
}

void ARCActionButtonEventDispatcher::CallOnDeactivate(FName ID, ARCActionButton* Actor) {
}

void ARCActionButtonEventDispatcher::CallOnActivate(FName ID, ARCActionButton* Actor) {
}


