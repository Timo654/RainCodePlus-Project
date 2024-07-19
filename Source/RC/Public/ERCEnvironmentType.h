#pragma once
#include "CoreMinimal.h"
#include "ERCEnvironmentType.generated.h"

UENUM(BlueprintType)
enum class ERCEnvironmentType : uint8 {
    None,
    Camera,
    PlayerMoveSpeed,
    Fog,
    Rain,
    CharacterMaterial,
    ShinigamiMaterial,
    Minimap,
    AreaName,
    Wind,
    CharacterDrawLayerList,
    FaceFilterID,
};

