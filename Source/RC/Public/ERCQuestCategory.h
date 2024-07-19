#pragma once
#include "CoreMinimal.h"
#include "ERCQuestCategory.generated.h"

UENUM(BlueprintType)
enum class ERCQuestCategory : uint8 {
    QTMainQuest,
    QTSubQuest,
    QTSubStory,
    Max,
};

