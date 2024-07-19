#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERCNzCriminalEventType.h"
#include "ERCNzCriminalStateType.h"
#include "RCNzCriminalSceneData.h"
#include "RCNzCriminalcameraSettingData.h"
#include "RCSuspectCharacterData.h"
#include "RCNzCriminalManager.generated.h"

class URCNzCriminalFailure;
class URCNzCriminalMain;
class URCNzCriminalStart;

UCLASS(Blueprintable)
class RC_API ARCNzCriminalManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNzCriminalStateType StateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChapterNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SceneNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CriminalCharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCSuspectCharacterData> SuspectCharacterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestionTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HintTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNzCriminalSceneData SceneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCNzCriminalcameraSettingData CameraSettingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SuspectCharacterActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEventProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCNzCriminalEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectSuspectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedSuspectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzCriminalMain* MainUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzCriminalStart* StartUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCNzCriminalFailure* FailureUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWaitPushKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNextState;
    
public:
    ARCNzCriminalManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopPlayFailureCharacter();
    
    UFUNCTION(BlueprintCallable)
    void SetWaitPushKey(bool bState);
    
    UFUNCTION(BlueprintCallable)
    void SetupSelect();
    
    UFUNCTION(BlueprintCallable)
    void SetupPreSelect();
    
    UFUNCTION(BlueprintCallable)
    void SetupIncorrectProduction();
    
    UFUNCTION(BlueprintCallable)
    void SetupHintProduction();
    
    UFUNCTION(BlueprintCallable)
    void SetupCorrectProduction();
    
    UFUNCTION(BlueprintCallable)
    void SetupBeginProduction();
    
    UFUNCTION(BlueprintCallable)
    void SetupBegin(const TArray<AActor*>& InSuspectCharacterActorList);
    
    UFUNCTION(BlueprintCallable)
    void SetLineFromTextId(const FName InLineTextId);
    
    UFUNCTION(BlueprintCallable)
    void PlayFailureCharacter();
    
    UFUNCTION(BlueprintCallable)
    void NotifyStartEvent();
    
    UFUNCTION(BlueprintCallable)
    void NotifyFinishEvent();
    
    UFUNCTION(BlueprintCallable)
    bool IsNextState();
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadedAsset();
    
    UFUNCTION(BlueprintCallable)
    bool IsGameOver();
    
    UFUNCTION(BlueprintCallable)
    bool IsCorrectCriminal();
    
    UFUNCTION(BlueprintCallable)
    void Incorrect();
    
    UFUNCTION(BlueprintCallable)
    void GiveHint();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedSuspectIndex();
    
    UFUNCTION(BlueprintCallable)
    FName GetHintTextId();
    
    UFUNCTION(BlueprintCallable)
    FName GetFailureLineId();
    
    UFUNCTION(BlueprintCallable)
    ERCNzCriminalEventType GetEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraFocalLength(const int32 InCameraIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraBlendTime(const int32 InCameraIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void GameOver();
    
    UFUNCTION(BlueprintCallable)
    void Correct();
    
};

