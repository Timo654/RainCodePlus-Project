#pragma once
#include "CoreMinimal.h"
#include "ERCActorQuestType.generated.h"

UENUM(BlueprintType)
enum class ERCActorQuestType : uint8 {
    None,
    MainQuest,
    SubQuestStart,
    SubQuestEnd,
};

