#include "RCDroneActor.h"
#include "RCDroneAnimCtrl.h"
#include "RCDroneControlComponent.h"

ARCDroneActor::ARCDroneActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ControlComp = CreateDefaultSubobject<URCDroneControlComponent>(TEXT("ContolComponent"));
    this->AnimCtrlComp = CreateDefaultSubobject<URCDroneAnimCtrl>(TEXT("AnimCtrlComponent"));
    this->Height = 0.00f;
    this->bAutoHeight = false;
}


