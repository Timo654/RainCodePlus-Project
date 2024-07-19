#include "RCParamSequencerSoundTemplateTableRow.h"

FRCParamSequencerSoundTemplateTableRow::FRCParamSequencerSoundTemplateTableRow() {
    this->Time = 0.00f;
    this->SoundType = 0;
    this->IsSubTitle = false;
    this->IsStart = false;
    this->IsChangeVolume = false;
    this->Volume = 0.00f;
    this->IsLoop = false;
    this->IsFedeIn = false;
    this->FedeInTime = 0.00f;
    this->IsFadeOut = false;
    this->FedeOutTime = 0.00f;
}

