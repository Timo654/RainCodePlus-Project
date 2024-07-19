#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERCNazoLSAState.h"
#include "RCNazoLevelManageData.h"
#include "RCNazoSceneData.h"
#include "RCNazoTileData.h"
#include "RCRealLevelScriptActor.h"
#include "RCNazoLevelScriptActor.generated.h"

class ALevelScriptActor;
class UDataTable;

UCLASS(Blueprintable)
class RC_API ARCNazoLevelScriptActor : public ARCRealLevelScriptActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNazoLSAState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SceneSettingsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SceneSettingsDataTableBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TileSettingsDataTableBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SceneSettingsDataTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SceneSettingsDataTableBGPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SceneSettingsDataTableBGCommonPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TileSettingsDataTableBGCommonPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MapListLevelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TileListLevelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MapListCommonLevelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TileListCommonLevelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartSceneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSceneTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckPointSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SceneIDArrayAfterCheckPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartByManualSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartByAutoSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSceneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentSceneVisibleCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentSceneAssetLoadCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoadEndEventSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrevSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevSceneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextSceneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNextSceneAutoLoadStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextSceneAutoLoadSceneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextSceneAutoLoadDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextSceneAutoLoadElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextSceneAutoLoadSceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextSceneAutoLoadMomoryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextSceneAutoLoadWarningMomoryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChangeSceneReleaseCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeSceneRestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoSceneData> SceneDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> SceneDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LoadingSceneIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LoadedSceneIDArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCNazoLevelManageData> LevelManageDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRCNazoTileData> TileDataMap;
    
public:
    ARCNazoLevelScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnloadLevelCompleted();
    
    UFUNCTION(BlueprintCallable)
    void StartScene(FName SceneID);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSceneLevelScriptActor(ALevelScriptActor* LevelScriptActor);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseScene(FName SceneID);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseCurrentScene();
    
    UFUNCTION(BlueprintCallable)
    bool LoadScene(FName SceneID);
    
    UFUNCTION(BlueprintCallable)
    void LoadNextScene();
    
    UFUNCTION(BlueprintCallable)
    void LoadLevelCompleted();
    
    UFUNCTION(BlueprintCallable)
    void LoadAllNextScenes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSceneInvisible(FName SceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReleaseSceneCompleted(FName SceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadSceneCompleted(FName SceneID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentSceneVisibleCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentSceneReady();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNextSceneID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelScriptActor* GetCurrentSceneLevelScriptActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentSceneID();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeTitle();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeScene(FName SceneID);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeNextScene();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeFirstScene();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeCheckPointScene(bool bRecoverPlayerHP);
    
};

