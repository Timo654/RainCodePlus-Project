#pragma once
#include "CoreMinimal.h"
#include "RCNazoMoveLoopLevelSettingsBase.h"
#include "RCNazoMoveLoopLevelSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopLevelSettings : public FRCNazoMoveLoopLevelSettingsBase {
    GENERATED_BODY()
public:
    RC_API FRCNazoMoveLoopLevelSettings();
};

