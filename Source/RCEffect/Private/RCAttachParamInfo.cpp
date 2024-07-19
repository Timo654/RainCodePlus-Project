#include "RCAttachParamInfo.h"

FRCAttachParamInfo::FRCAttachParamInfo() {
    this->bAttached = false;
    this->RotateSpawnedRule = ERCAttachRotRule::None;
    this->RotateUpdateRule = ERCAttachRotRule::None;
}

