#pragma once
#include "CoreMinimal.h"
#include "RCNazoMoveLoopLevelSettingsBase.h"
#include "RCNazoMoveLoopLevelSettingsBG.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoMoveLoopLevelSettingsBG : public FRCNazoMoveLoopLevelSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TilingNum;
    
    RC_API FRCNazoMoveLoopLevelSettingsBG();
};

