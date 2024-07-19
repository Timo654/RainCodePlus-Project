#include "RCOptionCharaShinigami.h"

ARCOptionCharaShinigami::ARCOptionCharaShinigami(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->sWarpRange = 1000;
    this->sYumacapcelRange = 40;
    this->sYumaRange = 50;
    this->sYumaThinkRange = 120;
    this->sYumaMaxRange = 150;
    this->sfNiunireTime = 1.00f;
    this->sfThinkTime = 30.00f;
    this->sAddsped = 1.20f;
    this->m_run_shikii = 10.00f;
    this->tiltrot = 45.00f;
    this->tiltime = 0.70f;
    this->Waitme = 10.00f;
    this->m_MaxV = 550.00f;
    this->bUseAI = true;
}

void ARCOptionCharaShinigami::SetUseAI(bool bFlag) {
}

void ARCOptionCharaShinigami::RemoveSsite() {
}

bool ARCOptionCharaShinigami::IsUseAI() {
    return false;
}

int32 ARCOptionCharaShinigami::GetShinigamiTilt() {
    return 0;
}

int32 ARCOptionCharaShinigami::GetShinigamiStat() {
    return 0;
}

float ARCOptionCharaShinigami::GetShinigamiSpeed() {
    return 0.0f;
}

float ARCOptionCharaShinigami::GetShinigamiFrame() {
    return 0.0f;
}


