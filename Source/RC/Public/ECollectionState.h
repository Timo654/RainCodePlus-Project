#pragma once
#include "CoreMinimal.h"
#include "ECollectionState.generated.h"

UENUM()
enum class ECollectionState : int32 {
    PRE_COLLECTION_TUTORIAL,
    COLLECTION_TUTORIAL,
    SELECT_READY,
    PRE_COLLECTION_SELECT,
    COLLECTION_SELECT,
    PRE_COLLECTION_DIALOG,
    COLLECTION_DIALOG,
    PRE_FINISH,
    FINISH,
    NOT_OPEN,
};

