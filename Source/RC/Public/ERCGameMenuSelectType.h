#pragma once
#include "CoreMinimal.h"
#include "ERCGameMenuSelectType.generated.h"

UENUM(BlueprintType)
enum class ERCGameMenuSelectType : uint8 {
    Top,
    WarldMap,
    AreaMap,
    Kaikagi,
    MainQuest,
    SubQuest,
    Persona,
    Skill,
    Character,
    Glossary,
    Collection,
    SaveLoad,
    Save,
    Load,
    Option,
    Max,
};

