#include "RCCharacterFacialCtrl.h"

URCCharacterFacialCtrl::URCCharacterFacialCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentFacialName = TEXT("Default_01");
    this->FacialName = TEXT("Default_01");
    this->bCanBlink = true;
    this->BlinkIntervalSec = 4.77f;
    this->BlinkDuration = 0.10f;
    this->ShortBlinkIntervalCount = 7;
    this->LipsyncBasedOnLinesIntervalSec = 0.00f;
    this->LipsyncBasedOnLinesDuration = 0.00f;
    this->FacialDuration = 0.10f;
    this->FacialBlendRate = 1.50f;
    this->EyeMorphBlend = NULL;
    this->EyebrowMorphBlend = NULL;
    this->MouthMorphBlend = NULL;
    this->CurrentEffectLinePatternName = TEXT("T_Chr_White_C");
    this->bCanFlowLiquid = false;
    this->FlowLiquidSec = 1.00f;
    this->FlowLiquidBackSec = 0.05f;
    this->CurrentSSweatParam = 0.00f;
    this->PreSSweatParam = 0.00f;
    this->PostSSweatParam = 0.00f;
    this->CurrentBSweatParam = 0.00f;
    this->PreBSweatParam = 0.00f;
    this->PostBSweatParam = 0.00f;
    this->CurrentTearsParam = 0.00f;
    this->PreTearsParam = 0.00f;
    this->PostTearsParam = 0.00f;
    this->CurrentColorChangePatternName = TEXT("T_Chr_White_C");
    this->CurrentColorChangePatternIntensity = 0.00f;
    this->PreColorChangePatternIntensity = 0.00f;
    this->PostColorChangePatternIntensity = 0.00f;
    this->ColorChangePatternBackSec = 1.00f;
    this->LipSyncCullNum = 0;
}

void URCCharacterFacialCtrl::SetCanBlink(bool bState) {
}

void URCCharacterFacialCtrl::ChangeFacial(const FName InFacialName, bool bAllowFlowLiquid) {
}

void URCCharacterFacialCtrl::Blink() {
}


