#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ERCAdvHUDWidgetRequest.h"
#include "ERCAdvHUDWidgetState.h"
#include "ERCReHUDFreeMoveState.h"
#include "ERCReHUDState.h"
#include "RCAdvHUD.h"
#include "RCReHUDSelectData.h"
#include "RCSoundNovelRowData.h"
#include "RCReHUD.generated.h"

class UDataTable;
class URCUiSoundNovel;

UCLASS(Blueprintable, NonTransient)
class RC_API ARCReHUD : public ARCAdvHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCReHUDState HUDState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCReHUDFreeMoveState FreeMoveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest FreeMoveRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreeMoveButtonGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMiniMapSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCReHUDState HUDStateAtFinishResearchMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCSoundNovelRowData> SoundNovelDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundNovelDataCurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SoundNovelTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoundNovelDelayToNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSoundNovelWaitCmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState SoundNovelWidgetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState SoundNovelWidgetOldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URCUiSoundNovel* SoundNovelWidget;
    
public:
    ARCReHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartLocation(bool bInMiniMap, bool bInLocation);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool SoundNovelWidgetStart(bool bInShowBackgroundFade);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SoundNovelStart(UDataTable* InSoundNovelDataTable, bool bInShowBackgroundFade);
    
    UFUNCTION(BlueprintCallable)
    bool SoundNovelShowBackgroundFade(bool bInShow);
    
    UFUNCTION(BlueprintCallable)
    bool SetMiniMapLocation(FName in_LocationID, FName in_LocationTextID);
    
    UFUNCTION(BlueprintCallable)
    bool SetLocationName(FName in_LocationID, FName in_LocationTextID);
    
    UFUNCTION(BlueprintCallable)
    bool SetLocationDisplayLocation(FName in_LocationID, FName in_LocationTextID);
    
    UFUNCTION(BlueprintCallable)
    bool SelectStartWithDataArray(TArray<FRCReHUDSelectData> InSelectDataArray, FName InQuestionTextID);
    
    UFUNCTION(BlueprintCallable)
    bool SelectStart(int32 in_SelectNum, FName in_QuestionTextID);
    
    UFUNCTION(BlueprintCallable)
    bool SelectSetData(int32 in_Index, FName in_TextID, bool in_bCheckMark);
    
    UFUNCTION(BlueprintCallable)
    bool SelectFinish();
    
    UFUNCTION(BlueprintCallable)
    bool LoadLocationDataName(FName in_LocationID, FName in_LocationTextID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCAdvHUDWidgetState GetTalkWindowState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCAdvHUDWidgetState GetSelectWindowState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCReHUDState GetHUDState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCReHUDFreeMoveState GetFreeMoveState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentMiniMapTextID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentMiniMapLocationID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentLocationTextID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentLocationID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentLocationDisplayTextID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentLocationDisplayLocationID();
    
    UFUNCTION(BlueprintCallable)
    void FreeMoveStart();
    
    UFUNCTION(BlueprintCallable)
    void FreeMoveFinish();
    
    UFUNCTION(BlueprintCallable)
    bool FreeMoveButtonGuideUpdate();
    
    UFUNCTION(BlueprintCallable)
    bool FreeMoveButtonGuideStart();
    
    UFUNCTION(BlueprintCallable)
    bool FreeMoveButtonGuideFinish();
    
    UFUNCTION(BlueprintCallable)
    void FinishLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSoundNovelFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSelectWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSelectStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSelectFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLocationStarted(bool bInMiniMap, bool bInLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLocationRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckLocationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckFreeMoveButtonGuide();
    
};

