#include "SoundVolume.h"

FSoundVolume::FSoundVolume() {
    this->MasterVolume = 0.00f;
    this->pl_bgmVolume = 0.00f;
    this->pg_bgmVolume = 0.00f;
    this->option_bgmVolume = 0.00f;
    this->pl_seVolume = 0.00f;
    this->pg_seVolume = 0.00f;
    this->option_seVolume = 0.00f;
    this->pl_envVolume = 0.00f;
    this->pg_envVolume = 0.00f;
    this->option_envVolume = 0.00f;
    this->pl_voiceVolume = 0.00f;
    this->pg_voiceVolume = 0.00f;
    this->option_voiceVolume = 0.00f;
    this->pl_envMapVolume = 0.00f;
}

