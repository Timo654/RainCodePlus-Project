#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ERCAdvHUDSpSelectType.h"
#include "ERCAdvHUDTalkWindowType.h"
#include "ERCAdvHUDWBPLoadState.h"
#include "ERCAdvHUDWidgetRequest.h"
#include "ERCAdvHUDWidgetState.h"
#include "ESCBaloonFrame.h"
#include "ESCBaloonType.h"
#include "RCAdvHUDBalloonData.h"
#include "RCAdvHUDBalloonWidgetSet.h"
#include "RCAdvHUDBaseComponent.h"
#include "RCAdvHUDTalkIconData.h"
#include "RCAdvHUDTalkTextData.h"
#include "RCReHUDSelectData.h"
#include "RCTalkData.h"
#include "RCAdvHUDTalkComponent.generated.h"

class APawn;
class ARCCharacterRender;
class UDataTable;
class URCReUiMessageWindow;
class URCReUiSelectWindow;
class URCReUiShinigamiBalloon;
class URCUiIntTalk;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RC_API URCAdvHUDTalkComponent : public URCAdvHUDBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEditInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBalloonEnable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDBalloonWidgetSet> BalloonWidgetSets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDBalloonWidgetSet> FreeBalloonWidgetSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonNearScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBalloonFar3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Balloon3DScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BalloonFarScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBalloonFarHiddenByTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BalloonNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsingBalloonNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDBalloonData> BalloonDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTalkIconEnable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCUiIntTalk*> TalkIconWidgets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCUiIntTalk*> FreeTalkIconWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkIconSubquestScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D TalkIconSubquestPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TalkIconNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsingTalkIconNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDTalkIconData> TalkIconDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDTalkIconData> NewTalkIconDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest TalkRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDTalkWindowType TalkRequestWindowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDTalkWindowType TalkWindowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TalkVoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTalkSkipTyping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> TalkFacial2D3DMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState TalkWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState TalkWindowOldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TalkWindowPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiMessageWindow* MessageWindow;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARCCharacterRender* ShinigamiActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState ShinigamiBalloonState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState ShinigamiBalloonOldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShinigamiBalloonOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShinigamiBalloonPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiShinigamiBalloon* ShinigamiBalloonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SequentialTalkID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCTalkData SequentialTalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequentialTalkForceAutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequentialTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequentialTalkIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SequentialTalkTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequentialTalkDelayToNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequentialTalkWaitCmd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequentialTalkRequestSuspend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequentialTalkSuspending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequentialTalkRestart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState SelectWindowState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest SelectRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectRequestNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectRequestQuestionTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRCReHUDSelectData> SelectDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectStartAllWidgetHiddenEnable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiSelectWindow* SelectWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDSpSelectType SpSelectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpSelectWBPPath_EyeTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpSelectLoadingWBPPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWBPLoadState SpSelectWBPLoadState;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiSelectWindow* SpSelectWindow;
    
public:
    URCAdvHUDTalkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TalkWindowClose(ERCAdvHUDTalkWindowType InWindowType);
    
    UFUNCTION(BlueprintCallable)
    bool TalkStartSimple(ERCAdvHUDTalkWindowType InWindowType);
    
    UFUNCTION(BlueprintCallable)
    bool TalkStart2(ERCAdvHUDTalkWindowType InWindowType, FName InTextID, int32 InCharacterFaceID, int32 InCharacterFacialID, bool bInAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    bool TalkSetTextSimple(FName InTextID, float InDelayAtEndText);
    
    UFUNCTION(BlueprintCallable)
    bool TalkSetTextData(FRCAdvHUDTalkTextData InTextData);
    
    UFUNCTION(BlueprintCallable)
    bool TalkSetText2(int32 InCharacterFaceID, int32 InCharacterFacialID, FName InTextID, int32 InCharacter3DID, FName InCharacter3DFacialID, FName InVoiceID, float InDelayAtEndText);
    
    UFUNCTION(BlueprintCallable)
    bool TalkSetGradationFilter(FName InFilterID);
    
    UFUNCTION(BlueprintCallable)
    bool TalkSetForceTextSpeedSettings(bool bInIsForceTextSpeed, int32 InForceTextSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool TalkSetAuto(bool bInAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    bool TalkLoadNameplateData(int32 InCharacterNameID, int32 InCharacterNameSubID);
    
    UFUNCTION(BlueprintCallable)
    bool TalkLoadFaceData(int32 InCharacterFaceID, int32 InCharacterFacialID);
    
    UFUNCTION(BlueprintCallable)
    bool TalkLoadCharacterData2(int32 InCharacterNameID, TArray<int32> InCharacterNameSubIDs, int32 InCharacterFaceID, TArray<int32> InCharacterFacialIDs);
    
    UFUNCTION(BlueprintCallable)
    bool TalkLoadCharacterData(int32 InCharacterNameID, int32 InCharacterNameSubID, int32 InCharacterFaceID, int32 InCharacterFacialID);
    
    UFUNCTION(BlueprintCallable)
    bool TalkFinish();
    
    UFUNCTION(BlueprintCallable)
    bool SpSelect_StartWithDataArray(ERCAdvHUDSpSelectType NewSpSelectType, TArray<FRCReHUDSelectData> NewSelectDataArray, FName QuestionTextID);
    
    UFUNCTION(BlueprintCallable)
    bool SpSelect_StartLoadWBP(ERCAdvHUDSpSelectType NewSpSelectType);
    
    UFUNCTION(BlueprintCallable)
    bool SpSelect_ReleaseWBP(ERCAdvHUDSpSelectType NewSpSelectType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SpSelect_CheckLoadWBPCompleted(ERCAdvHUDSpSelectType NewSpSelectType);
    
    UFUNCTION(BlueprintCallable)
    bool SetTalkIconData(APawn* InPawn, bool bInDraw, bool bInAccessable, bool bInSubquest, float InScale, bool bInGoal);
    
    UFUNCTION(BlueprintCallable)
    void SetShinigamiActor(ARCCharacterRender* InShinigamiActor);
    
    UFUNCTION(BlueprintCallable)
    bool SetBalloonData(APawn* InPawn, ESCBaloonFrame InBalloonFrameType, ESCBaloonType InBalloonContentType, FName InTextID, bool bInBalloonDraw, bool bInTextDraw);
    
    UFUNCTION(BlueprintCallable)
    bool SequentialTalkStartFromTalkID(FName InTalkID, bool bInForceAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    bool SequentialTalkStartFromDataTable(UDataTable* InTable, FName InTalkID, bool bInForceAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    bool SequentialTalkStartFromData2(FRCTalkData InTalkData, bool bInForceAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    bool SequentialTalkStart2(FName InTalkID, FRCTalkData InTalkData, bool bInForceAutoPlay);
    
    UFUNCTION(BlueprintCallable)
    bool SequentialTalkResume();
    
    UFUNCTION(BlueprintCallable)
    bool SequentialTalkRestart();
    
    UFUNCTION(BlueprintCallable)
    bool SequentialTalkRequestSuspend();
    
    UFUNCTION(BlueprintCallable)
    bool SequentialTalkFinish();
    
    UFUNCTION(BlueprintCallable)
    bool SelectStartWithDataArray(TArray<FRCReHUDSelectData> InSelectDataArray, FName InQuestionTextID);
    
    UFUNCTION(BlueprintCallable)
    bool SelectStart(int32 InSelectNum, FName InQuestionTextID);
    
    UFUNCTION(BlueprintCallable)
    bool SelectSetData(int32 InIndex, FName InTextID, bool InbCheckMark);
    
    UFUNCTION(BlueprintCallable)
    bool SelectFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTalkIconVisible(APawn* InPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBalloonVisible(APawn* InPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCAdvHUDWidgetState GetUsingTalkWidgetState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCAdvHUDWidgetState GetUsingTalkWidgetOldState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTalkIconDataNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetTalkIconData(int32 InIndex, FRCAdvHUDTalkIconData& OutTalkIconData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSequentialTalkVoiceCharacterID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCAdvHUDWidgetState GetSelectWindowState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBalloonDataNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetBalloonData(int32 InIndex, FRCAdvHUDBalloonData& OutBalloonData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTalkWindowClosed(ERCAdvHUDTalkWindowType InWindowType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTalkWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTalkStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTalkSkipVoice(FName InTextID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTalkFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTalkEndText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSequentialTalkSuspending();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSequentialTalkFromTalkID(FName InTalkID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSequentialTalkFinishedLastText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSequentialTalkFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSequentialTalkCloseAtAllEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSequentialTalk();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSelectWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSelectStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSelectFinished();
    
};

