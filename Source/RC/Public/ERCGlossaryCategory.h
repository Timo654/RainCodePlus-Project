#pragma once
#include "CoreMinimal.h"
#include "ERCGlossaryCategory.generated.h"

UENUM(BlueprintType)
enum class ERCGlossaryCategory : uint8 {
    GCStory,
    GCShinigamiInfo,
    GCTutorial,
    Max,
};

