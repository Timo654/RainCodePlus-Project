#pragma once
#include "CoreMinimal.h"
#include "ESoundNovelStatus.generated.h"

UENUM()
enum class ESoundNovelStatus : int8 {
    Idle,
    SlideIn,
    Run,
    Typing,
    WaitPush,
    PushButton,
    WaitReHUD,
    SlideOut,
};

