#pragma once
#include "CoreMinimal.h"
#include "RCNazoLevelSettings.h"
#include "RCNazoMoveLoopRandomTileSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopRandomTileSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoLevelSettings> LevelSettingsArray;
    
    RC_API FRCNazoMoveLoopRandomTileSettings();
};

