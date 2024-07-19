#pragma once
#include "CoreMinimal.h"
#include "ERCNazoLSASceneState.h"
#include "RCNazoLevelData.h"
#include "RCNazoMapLevelSettingsBG.h"
#include "RCNazoMapSettingsBG.h"
#include "RCNazoSceneSettingsPLN.h"
#include "RCNazoSceneData.generated.h"

class ALevelScriptActor;

USTRUCT(BlueprintType)
struct FRCNazoSceneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoLSASceneState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoSceneSettingsPLN SceneSettingsPLN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMapSettingsBG MapSettingsBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNazoMapLevelSettingsBG MapLevelSettingsBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelScriptActor* LevelScriptActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoLevelData> LevelDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartLoadLevelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> LevelDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TilingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNextSceneAutoLoadStart;
    
    RC_API FRCNazoSceneData();
};

