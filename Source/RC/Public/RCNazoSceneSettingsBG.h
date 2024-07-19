#pragma once
#include "CoreMinimal.h"
#include "RCNazoMoveLoopLevelSettingsBG.h"
#include "RCNazoSceneSettingsBase.h"
#include "RCNazoSceneSettingsBG.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoSceneSettingsBG : public FRCNazoSceneSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopLevelSettingsBG MoveLoopLevelSettings;
    
    RC_API FRCNazoSceneSettingsBG();
};

