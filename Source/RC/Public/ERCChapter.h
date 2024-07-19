#pragma once
#include "CoreMinimal.h"
#include "ERCChapter.generated.h"

UENUM(BlueprintType)
enum class ERCChapter : uint8 {
    Chapter0,
    Chapter1,
    Chapter2,
    Chapter3,
    Chapter4,
    Chapter5,
    Prologue = 11,
    Epilogue,
    Figure = 30,
    Figure010,
    Figure011,
    Figure012,
    Figure013,
    Figure015,
    SubStory010 = 21,
    SubStory011,
    SubStory012,
    SubStory013,
    SubStory015,
    Proto = 50,
    Gallery = 70,
    PgTest = 90,
    PlTest = 99,
};

