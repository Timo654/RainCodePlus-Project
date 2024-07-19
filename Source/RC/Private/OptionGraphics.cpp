#include "OptionGraphics.h"

FOptionGraphics::FOptionGraphics() {
    this->MobQuality = ERCOptionMobQuality::MobLv0_Normal;
    this->SubLevelQuality = ERCOptionSubLevel::SubLevelLv0_Normal;
    this->CharacterDrawQuality = ERCOptionCharacterDraw::CharacterDrawLv0_Normal;
    this->MobNumQuality = ERCOptionMobNum::MobNumLv0_Normal;
    this->bMobPartsPreLoad = false;
    this->bMobPartsPreLoadNotMove = false;
    this->WindowMode = ERCOptionWindowMode::FullScreen;
    this->DisplayNum = 0;
    this->FramerateCap = ERCOptionFramerateCap::Non;
    this->Brightness = 0;
    this->VSync = ERCCommonSwitch::On;
    this->AntiAliasingQuality = ERCOptionQuality::Epic;
    this->ShadowQuality = ERCOptionQuality::Epic;
    this->TextureQuality = ERCOptionQuality::Epic;
    this->PostprocessQuality = ERCOptionQuality::Epic;
    this->EffectQuality = ERCOptionQuality::Epic;
    this->DisplayScale = 0.00f;
    this->ConsumerQualityMode = ERCOptionConsumerQualityMode::Quality;
    this->CharacterQuality = ERCOptionQuality::Epic;
}

