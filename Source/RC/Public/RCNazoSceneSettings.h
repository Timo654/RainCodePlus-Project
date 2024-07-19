#pragma once
#include "CoreMinimal.h"
#include "RCNazoMoveLoopLevelSettings.h"
#include "RCNazoSceneSettingsBase.h"
#include "RCNazoSceneSettings.generated.h"

USTRUCT(BlueprintType)
struct FRCNazoSceneSettings : public FRCNazoSceneSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMoveLoopLevelSettings MoveLoopLevelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadWhenPrevSceneStart;
    
    RC_API FRCNazoSceneSettings();
};

