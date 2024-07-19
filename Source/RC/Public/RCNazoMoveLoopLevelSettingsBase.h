#pragma once
#include "CoreMinimal.h"
#include "RCNazoLevelSettings.h"
#include "RCNazoMoveLoopRandomTileSettings.h"
#include "RCNazoMoveLoopLevelSettingsBase.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopLevelSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoLevelSettings> DefaultTileLevelSettingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCNazoMoveLoopRandomTileSettings> RandomTileSettingsMap;
    
    RC_API FRCNazoMoveLoopLevelSettingsBase();
};

