#include "RCFloorTypeComponent.h"

URCFloorTypeComponent::URCFloorTypeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->FloorTypeNumber = 0;
}


