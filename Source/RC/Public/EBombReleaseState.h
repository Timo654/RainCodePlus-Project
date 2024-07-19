#pragma once
#include "CoreMinimal.h"
#include "EBombReleaseState.generated.h"

UENUM(BlueprintType)
enum EBombReleaseState {
    PRE_TITLE,
    Title,
    PRE_TUTORIAL,
    TUTORIAL,
    PRE_START,
    Start,
    PRE_PLAY,
    Play,
    PRE_SUCCESS,
    Success,
    PRE_GAMEOVER,
    GameOver,
    PRE_FINISH,
    Finish,
};

