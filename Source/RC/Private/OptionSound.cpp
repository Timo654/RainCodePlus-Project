#include "OptionSound.h"

FOptionSound::FOptionSound() {
    this->VoiceLanguage = ERCVoiceLanguage::JA;
    this->VoiceQuality = ERCVoiceQuality::Hi;
    this->MovieQuality = ERCMovieQuality::Hi;
    this->MasterVolume = 0;
    this->BgmVolume = 0;
    this->SystemSeVolume = 0;
    this->EnvSeVolume = 0;
    this->VoiceVolume = 0;
}

