#include "RCAttachmentAnimCtrl.h"

URCAttachmentAnimCtrl::URCAttachmentAnimCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimationType = ERCAttachAnimType::Idle;
    this->CurrentAnimationType = ERCAttachAnimType::Idle;
}


