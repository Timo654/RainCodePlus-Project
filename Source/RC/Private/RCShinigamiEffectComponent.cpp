#include "RCShinigamiEffectComponent.h"

URCShinigamiEffectComponent::URCShinigamiEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerCharacter = NULL;
    this->OwnerMesh = NULL;
    this->ComponentNo = -1;
    this->AttachPointName = TEXT("spine_01");
}

bool URCShinigamiEffectComponent::EffectStart(FRCEffectComponentData& InEffectData) {
    return false;
}

bool URCShinigamiEffectComponent::EffectSpawn(FRCEffectComponentData& InEffectData) {
    return false;
}


