#pragma once
#include "CoreMinimal.h"
#include "ERCTitleListType.generated.h"

UENUM(BlueprintType)
enum class ERCTitleListType : uint8 {
    ChapterSelect,
    Collection,
    Continue,
    eShop,
    Language,
    LoagGame,
    NewGame,
    Question,
    Option,
    Start,
    SubStory,
    Quit,
    Gallery,
    License,
    Max,
};

