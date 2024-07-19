#include "RCSpiritMiniGameBFL.h"

URCSpiritMiniGameBFL::URCSpiritMiniGameBFL() {
}

void URCSpiritMiniGameBFL::SetSpiritMiniGameEnvironment(ARCSpiritMiniGameManager* InSpiritMiniGameManager) {
}

void URCSpiritMiniGameBFL::ResumeSpiritMiniGameData(const int32 InResumeCheckPointNumber) {
}

void URCSpiritMiniGameBFL::ReleaseSpiritMiniGameEnvironment() {
}

void URCSpiritMiniGameBFL::ProcessAfterReturn() {
}

ARCSpiritMiniGameManager* URCSpiritMiniGameBFL::GetSpiritMiniGameManager() {
    return NULL;
}

bool URCSpiritMiniGameBFL::GetResume() {
    return false;
}

FVector URCSpiritMiniGameBFL::GetHitWanderingSpiritPos() {
    return FVector{};
}

bool URCSpiritMiniGameBFL::GetHitWanderingSpirit() {
    return false;
}

int32 URCSpiritMiniGameBFL::GetCheckPointNumber() {
    return 0;
}

FVector URCSpiritMiniGameBFL::GetCheckPoint() {
    return FVector{};
}


