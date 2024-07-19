#include "RCCharacterProxyManager.h"

URCCharacterProxyManager::URCCharacterProxyManager() {
    this->AutoCharacterNum = 0;
    this->AutoSpawnNum = 0;
    this->MobSpawnMemoryThreshold = 93;
    this->OverPlayerLength = 100.00f;
    this->StopPlayerLength = 150.00f;
    this->bMovNearPlayerHide = false;
    this->LengthActorMin = 300.00f;
    this->LengthActorMax = 1500.00f;
    this->LengthKakiwariMin = 1400.00f;
    this->LengthKakiwariMax = 10000.00f;
    this->CharacterDrawMax = 5;
    this->PawnDrawMax = 25;
    this->KakiwariDrawMax = 30;
    this->InstanceCharacterDraw = 0;
    this->InstancePawnDraw = 0;
    this->NowCharacterDraw = 0;
    this->NowPawnDraw = 0;
    this->NowKakiwariDraw = 0;
    this->bIsMoveMobDraw = true;
    this->bIsMoveMobDrawChange = false;
    this->CharacterFadeInSecond = 0.30f;
    this->CharacterFadeOutSecond = 1.20f;
    this->KakiwariFadeInSecond = 0.50f;
    this->KakiwariFadeOutSecond = 1.00f;
    this->MobRunSpeed = 380.00f;
    this->MobWalkSpeed = 200.00f;
    this->bKakiwari = true;
    this->bKakiwariArea = true;
    this->bKakiwariLoad = false;
    this->LengthCameraAlphaMin = 60.00f;
    this->LengthCameraAlphaMax = 100.00f;
    this->CameraFOV = 0.00f;
    this->bDrawLayerNameChange = false;
    this->bReleaseToGC = false;
    this->bRelease = false;
    this->CenterActorType = ERCCharacterProxyCenterActorType::Player;
}


