#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERCAdvHUDPressedDecideResult.h"
#include "ERCAdvHUDSubtitleType.h"
#include "ERCAdvHUDTalkWindowType.h"
#include "ERCAdvHUDWidgetRequest.h"
#include "ERCAdvHUDWidgetState.h"
#include "ERCInputKeyType.h"
#include "ESCBaloonFrame.h"
#include "ESCBaloonType.h"
#include "RCAdvHUDDebugDrawWidgetData.h"
#include "RCAdvHUDResearchDetailStartData.h"
#include "RCAdvHUDTalkTextData.h"
#include "RCAdvHUD_DebugSetDrawHUDDelegate.h"
#include "RCAdvHUD_NotifyDelegate.h"
#include "RCSubtitleData.h"
#include "RCTalkData.h"
#include "RCUiFaderHUD.h"
#include "RCAdvHUD.generated.h"

class APawn;
class ARCCharacterRender;
class ARCCheckActor;
class ARCPawnRender;
class UDataTable;
class URCAdvHUDAdvComponent;
class URCAdvHUDBaseComponent;
class URCAdvHUDInteractIconComponent;
class URCAdvHUDMapComponent;
class URCAdvHUDPauseComponent;
class URCAdvHUDResearchComponent;
class URCAdvHUDTalkComponent;
class URCMenuCollectionLayout;
class URCMenuCollectionWindow;
class URCNzResult;
class URCReUiMessageFastForward;
class URCTopMenu;
class URCUiBackLog;
class URCUiButtonGuide;
class URCUiGenericWindow;
class URCUiMenuAreaMap;
class URCUiMenuCharacterTop;
class URCUiMenuGlossaryBase;
class URCUiMenuGuide;
class URCUiMenuKagi;
class URCUiMenuMainQuest;
class URCUiMenuSkill;
class URCUiMenuSkillSelect;
class URCUiMenuSkillWindow;
class URCUiMenuSubQuest;
class URCUiMovieSkip;
class URCUiSubtitle;
class URCUiTutorialWindow;

UCLASS(Blueprintable, NonTransient)
class RC_API ARCAdvHUD : public ARCUiFaderHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEditInstance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ViewportSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewportScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PlayerScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PlayerScreenOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerScreenScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChapterNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URCAdvHUDBaseComponent*> Components;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadingCharaIntegrationIDToFaceIDDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CharaIntegrationIDToFaceIDDataTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CharaIntegrationIDToFaceIDDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GenericWindowPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiGenericWindow* GenericWindowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState ButtonGuideState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState ButtonGuideOldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest ButtonGuideRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ButtonGuidePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonGuideModeID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiButtonGuide* ButtonGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDSubtitleType SubtitleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubtitleTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitleHiddenByOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubtitleWaitPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState SubtitleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetState OldSubtitleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubtitlePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubtitleVoiceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubtitleDelayAtEndVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubtitleVoiceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubtitleVoiceElapsedTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiSubtitle* Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDSubtitleType SequentialSubtitleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SequentialSubtitleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCSubtitleData SequentialSubtitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequentialSubtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequentialSubtitleHiddenByOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequentialSubtitleWaitPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSequentialSubtitleDisableSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SequentialSubtitleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequentialSubtitleDelayToNextTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequentialSubtitleElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest TopMenuRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest WorldMenuRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TopMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCTopMenu* TopMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpenTopMenuWithOtherMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest MenuGuideRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MenuGuideWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMenuGuide* MenuGuideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest AreaMapMenuRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaMapMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMenuAreaMap* AreaMapMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayedNewAreaSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest KagiMenuRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KagiMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMenuKagi* KagiMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest KagiSelectMenuRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKagiSelectNotPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKagiSelectPrevPauseEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKagiSelectPrevMenuEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKagiSelectPrevBacklogEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKagiSelectPrevCameraLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KagiSelectMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMenuKagi* KagiSelectMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest MainQuestMenuRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MainQuestMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMenuMainQuest* MainQuestMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest SubQuestMenuRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubQuestMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMenuSubQuest* SubQuestMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest SkillSelectMenuRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillSelectMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMenuSkillSelect* SkillSelectMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest SkillMenuRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMenuSkill* SkillMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillWindowPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMenuSkillWindow* SkillWindowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest GlossaryMenuRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlossaryMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMenuGlossaryBase* GlossaryMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest CollectionMenuRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectionMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCMenuCollectionLayout* CollectionMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest CollectionWindowRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollectionWindowPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCMenuCollectionWindow* CollectionWindowWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest MovieSkipRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MovieSkipWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMovieSkip* MovieSkipWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest CharacterMenuRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterMenuWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiMenuCharacterTop* CharacterMenuWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERCAdvHUDWidgetRequest NzResultRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NzResultWidgetPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCNzResult* NzResultWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FastForwardIconPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCReUiMessageFastForward* FastForwardIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TutorialWindowPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TutorialWindowPath;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiTutorialWindow* TutorialWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BackLogPriority;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCUiBackLog* BackLogWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCAdvHUDInteractIconComponent* InteractIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCAdvHUDAdvComponent* AdvComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCAdvHUDTalkComponent* TalkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResearchPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCAdvHUDResearchComponent* ResearchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCAdvHUDMapComponent* MapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URCAdvHUDPauseComponent* PauseComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPlaySubTitleVoice;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUD_Notify OnInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUD_Notify OnTalkStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUD_Notify OnTalkEndText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUD_Notify OnTalkFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUD_Notify OnSequentialTalkFinishedLastText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUD_Notify OnSequentialTalkFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUD_Notify OnSubtitleEndDelay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUD_Notify OnSequentialSubtitleFinishedLastText;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUD_Notify OnSequentialSubtitleFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUD_Notify OnSequentialSubtitleCanceled;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRCAdvHUDDebugDrawWidgetData> DebugDrawWidgetDatas;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRCAdvHUD_DebugSetDrawHUD OnDebugSetDrawHUD;
    
    ARCAdvHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool WorldMenuStart();
    
    UFUNCTION(BlueprintCallable)
    bool WorldMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCollectionFlag(FName CharaID);
    
    UFUNCTION(BlueprintCallable)
    void Tutorial_StartTutorial(FName ID, bool isAnytimeClosable);
    
    UFUNCTION(BlueprintCallable)
    void Tutorial_RemoveTutorialWindow();
    
    UFUNCTION(BlueprintCallable)
    bool Tutorial_Load();
    
    UFUNCTION(BlueprintCallable)
    bool Tutorial_IsShowWindow();
    
    UFUNCTION(BlueprintCallable)
    bool Tutorial_IsFinished();
    
    UFUNCTION(BlueprintCallable)
    bool Tutorial_CreateWidget();
    
    UFUNCTION(BlueprintCallable)
    void Tutorial_CloseTutorial();
    
    UFUNCTION(BlueprintCallable)
    bool TopMenuStart();
    
    UFUNCTION(BlueprintCallable)
    bool TopMenuFinish();
    
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
    bool TalkForceFinish();
    
    UFUNCTION(BlueprintCallable)
    bool TalkFinish();
    
    UFUNCTION(BlueprintCallable)
    bool SubtitleStartFromCharacterID_WaitPush(int32 InCharacterNameID, int32 InCharacterNameSubID, FName InTextID, float InDelayAtEndVoice);
    
    UFUNCTION(BlueprintCallable)
    bool SubtitleStartFromCharacterID(int32 InCharacterNameID, int32 InCharacterNameSubID, FName InTextID, float InDelayAtEndVoice);
    
    UFUNCTION(BlueprintCallable)
    bool SubtitleStart_WaitPush(FName InNameID, FName InTextID, float InDelayAtEndVoice);
    
    UFUNCTION(BlueprintCallable)
    bool SubtitleStart_OnlyCursor();
    
    UFUNCTION(BlueprintCallable)
    bool SubtitleStart(FName InNameID, FName InTextID, float InDelayAtEndVoice);
    
    UFUNCTION(BlueprintCallable)
    bool SubtitleFinish();
    
    UFUNCTION(BlueprintCallable)
    bool SubtitleCancel();
    
    UFUNCTION(BlueprintCallable)
    bool SubQuestMenuStart();
    
    UFUNCTION(BlueprintCallable)
    bool SubQuestMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    bool StartKaiKagiSelect(TArray<FName> InKaiKagiIDArray, FName InCorrectKaiKagiID, bool bInNotPause);
    
    UFUNCTION(BlueprintCallable)
    bool SkillSelectMenuStart();
    
    UFUNCTION(BlueprintCallable)
    bool SkillSelectMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    bool SkillMenuStart();
    
    UFUNCTION(BlueprintCallable)
    bool SkillMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    bool SetTalkIconData(APawn* InPawn, bool bInDraw, bool bInAccessable, bool bInSubquest, float InScale, bool bInGoal);
    
    UFUNCTION(BlueprintCallable)
    void SetShinigamiActor(ARCCharacterRender* InShinigamiActor);
    
    UFUNCTION(BlueprintCallable)
    bool SetMenuHelpText(FName InHelpTextID);
    
    UFUNCTION(BlueprintCallable)
    bool SetMenuButtonGuideResetKeyType();
    
    UFUNCTION(BlueprintCallable)
    bool SetMenuButtonGuide(FName InModeID, bool bPlayOpenAnim);
    
    UFUNCTION(BlueprintCallable)
    bool SetMarkerData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInAccessable, bool bInSubquest, float InScale, bool bInGoal);
    
    UFUNCTION(BlueprintCallable)
    bool SetBalloonData(APawn* InPawn, ESCBaloonFrame InBalloonFrameType, ESCBaloonType InBalloonContentType, FName InTextID, bool bInBalloonDraw, bool bInTextDraw);
    
    UFUNCTION(BlueprintCallable)
    void SetAreaMapMenuNewAreaSePlayed(bool bInPlayedNewAreaSE);
    
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
    bool SequentialTalkRequestSuspend();
    
    UFUNCTION(BlueprintCallable)
    bool SequentialTalkForceFinish();
    
    UFUNCTION(BlueprintCallable)
    bool SequentialTalkFinish();
    
    UFUNCTION(BlueprintCallable)
    bool SequentialSubtitleStartFromSubtitleIDForMovie(FName InSubtitleID, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave);
    
    UFUNCTION(BlueprintCallable)
    bool SequentialSubtitleStartFromSubtitleID(FName InSubtitleID, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave);
    
    UFUNCTION(BlueprintCallable)
    bool SequentialSubtitleStartFromDataTable_WaitPush(UDataTable* InTable, FName InSubtitleID, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave);
    
    UFUNCTION(BlueprintCallable)
    bool SequentialSubtitleStartFromDataTable(UDataTable* InTable, FName InSubtitleID, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave);
    
    UFUNCTION(BlueprintCallable)
    bool SequentialSubtitleStartFromData2(FRCSubtitleData InSubtitleData, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave);
    
    UFUNCTION(BlueprintCallable)
    bool SequentialSubtitleStart2NoVoice(FName InSubtitleID, FRCSubtitleData InSubtitleData, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave);
    
    UFUNCTION(BlueprintCallable)
    bool SequentialSubtitleStart2(FName InSubtitleID, FRCSubtitleData InSubtitleData, float InDelayAtEnd, float InDelayToNext, bool bInCloseAtAllEnd, bool bInDisableSave);
    
    UFUNCTION(BlueprintCallable)
    bool SequentialSubtitleFinish();
    
    UFUNCTION(BlueprintCallable)
    bool SequentialSubtitleCancel(bool bInStopVoice);
    
    UFUNCTION(BlueprintCallable)
    void ResetSubtitlePlayVoiceFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResetSkillSelectFocus();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchStartWithQuestionText(FName InQuestionTextID, bool bInEnableFinish, bool bInMiniMap);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchStartTelop_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResearchStartTelop_CheckFinished();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchStart(bool bInShowLocation, bool bInEnableFinish, bool bInMiniMap);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchSpotSelectStartTelop_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResearchSpotSelectStartTelop_CheckFinished();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchSpotJudgeTelopMistake_Start();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchSpotJudgeTelopCorrect_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResearchSpotJudgeTelop_CheckFinished();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchQuestionText_Start(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchQuestionText_SetText(FName InTextID);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchQuestionText_Finish();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchModeFinish();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchMarker_SetMarkerData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInNameDraw, bool bInResearched, bool bInAccessable, float InScale);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchMarker_SetEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResearchMarker_IsMarkerVisible(ARCCheckActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchLocation_Start(FName InLocationID, FName InLocationTextID);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchLocation_Finish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResearchLocation_CheckFinished();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchGetKagi_StartFromKagiID(FName InKagiID, int32 InPhase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResearchGetKagi_CheckFinished();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchFinishTelop_Start();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResearchFinishTelop_CheckFinished();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchFinish();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchDetailStart(FRCAdvHUDResearchDetailStartData InStartData);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchDetailSpotSelectStart(FRCAdvHUDResearchDetailStartData InStartData);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchDetailPastVisionStart(FRCAdvHUDResearchDetailStartData InStartData, bool bInPast, bool bInEnableFinish);
    
    UFUNCTION(BlueprintCallable)
    int32 ResearchDetailGetSelectIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 ResearchDetailGetAccessedIndex();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchDetailFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ResearchDetailCheckAutoSelectMoveFinished();
    
    UFUNCTION(BlueprintCallable)
    bool ResearchDetailAutoSelectMoveStart(int32 InMarkerDataIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ResearchDetailAutoSelectCheckActorMoveStart(ARCCheckActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable)
    bool PressedDecideButtonSimple();
    
    UFUNCTION(BlueprintCallable)
    ERCAdvHUDPressedDecideResult PressedDecideButton();
    
    UFUNCTION(BlueprintCallable)
    bool OpenCollectionWindowStart(TArray<FString> TextArray);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnButtonGuideClick_ADVHolding(ERCInputKeyType InKeyType);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonGuideClick_ADV2StepResearchBack(ERCInputKeyType InKeyType);
    
public:
    UFUNCTION(BlueprintCallable)
    bool NzResultStart(const int32 InChapterNumber);
    
    UFUNCTION(BlueprintCallable)
    bool NzResultFinish();
    
    UFUNCTION(BlueprintCallable)
    bool MovieSkipStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MovieSkipFinish();
    
    UFUNCTION(BlueprintCallable)
    bool MenuGuideStart();
    
    UFUNCTION(BlueprintCallable)
    bool MenuGuideFinish();
    
    UFUNCTION(BlueprintCallable)
    bool MainQuestMenuStart();
    
    UFUNCTION(BlueprintCallable)
    bool MainQuestMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    bool KagiSelectMenuStart2(TArray<FName> InKaiKagiIDArray, FName InQuestionTextID, bool bInNotPause, bool bInAcceptCancel, int32 InDebugCorrectIndex);
    
    UFUNCTION(BlueprintCallable)
    bool KagiSelectMenuStart(TArray<FName> InKaiKagiIDArray, bool bInNotPause);
    
    UFUNCTION(BlueprintCallable)
    bool KagiSelectMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    bool KagiMenuStart();
    
    UFUNCTION(BlueprintCallable)
    bool KagiMenuFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTalkIconVisible(APawn* InPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMarkerVisible(ARCCheckActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable)
    bool IsKagiSelectMenuLarge();
    
    UFUNCTION(BlueprintCallable)
    bool IsKagiSelectMenu();
    
    UFUNCTION(BlueprintCallable)
    bool IsKagiMenuLarge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCollectionWindowFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanGlossaryMenuClose();
    
    UFUNCTION(BlueprintCallable)
    bool IsBusMenu();
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleKagiMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBalloonVisible(APawn* InPawn);
    
    UFUNCTION(BlueprintCallable)
    bool IsBackLogStarted();
    
    UFUNCTION(BlueprintCallable)
    bool IsBackLogFinish();
    
    UFUNCTION(BlueprintCallable)
    bool GlossaryMenuStart();
    
    UFUNCTION(BlueprintCallable)
    bool GlossaryMenuFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCAdvHUDWidgetState GetUsingTalkWidgetState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERCAdvHUDWidgetState GetUsingTalkWidgetOldState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillSelectIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkillMenuOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSequentialTalkVoiceCharacterID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSequentialSubtitleVoiceCharacterID();
    
    UFUNCTION(BlueprintCallable)
    FName GetSelectedMapID();
    
    UFUNCTION(BlueprintCallable)
    static bool GetPressedDecideButtonSimpleResult(ERCAdvHUDPressedDecideResult InResult);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetNotClosedWidgetNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URCUiMovieSkip* GetMovieSkipUi();
    
    UFUNCTION(BlueprintCallable)
    void GetKaiKagiSelectKaiKagiIDArray(TArray<FName>& OutKaiKagiIDArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKaiKagiSelectIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetKagiSelectMenuIndex();
    
    UFUNCTION(BlueprintCallable)
    bool GetInputMenuButtonGuideKeyType(ERCInputKeyType InKeyType);
    
    UFUNCTION(BlueprintCallable)
    bool GetBusMenuCancel();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleKagiMenuIndex();
    
    UFUNCTION(BlueprintCallable)
    bool GetAreaMenuOpen();
    
    UFUNCTION(BlueprintCallable)
    bool GetAreaMapMenuNewAreaSePlayed();
    
    UFUNCTION(BlueprintCallable)
    bool GetAreaMapMenuGoFastTravel();
    
    UFUNCTION(BlueprintCallable)
    bool GetAreaMapMenuEnableFastTravel(FName InWorldMapID);
    
    UFUNCTION(BlueprintCallable)
    bool GetAreaMapMenuCancel();
    
    UFUNCTION(BlueprintCallable)
    FName GetAreaMapID();
    
    UFUNCTION(BlueprintCallable)
    ARCPawnRender* GetAccessedNPC();
    
    UFUNCTION(BlueprintCallable)
    ARCCheckActor* GetAccessedCheckActor();
    
    UFUNCTION(BlueprintCallable)
    ARCCharacterRender* GetAccessedCharacter();
    
    UFUNCTION(BlueprintCallable)
    bool ForceFinishKaiKagiSelect();
    
    UFUNCTION(BlueprintCallable)
    bool EnterBuilding_SetEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    bool EnterBuilding_SetData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInAccessable, float InScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EnterBuilding_IsVisible(ARCCheckActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable)
    bool DetPointStart(int32 InPoint);
    
    UFUNCTION(BlueprintCallable)
    bool DetPointFinish();
    
    UFUNCTION(BlueprintCallable)
    bool CutInStart(FName InCutInID);
    
    UFUNCTION(BlueprintCallable)
    bool CutInFinish();
    
    UFUNCTION(BlueprintCallable)
    bool CutInAnimStartLoad(FName InCutInID);
    
    UFUNCTION(BlueprintCallable)
    bool CutInAnimStart(FName InCutInID, bool bInReleaseWBPAtFinished);
    
    UFUNCTION(BlueprintCallable)
    bool CutInAnimRelease(FName InCutInID);
    
    UFUNCTION(BlueprintCallable)
    bool CutInAnimNext();
    
    UFUNCTION(BlueprintCallable)
    bool CutInAnimAllRelease();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CollectionWindowFinish();
    
    UFUNCTION(BlueprintCallable)
    bool CollectionMenuStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CollectionMenuFinishForFooterAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CollectionMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    bool ClearMenuHelpText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTopMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTopMenuCheckStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTopMenuCheckFinished();
    
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
    bool CheckSubtitleEndDelay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSubQuestMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSubQuestMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSubQuestMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkillSelectMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkillSelectMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkillSelectMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkillMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkillMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkillMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkillGetInterval();
    
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
    bool CheckSequentialSubtitleFromSubtitleID(FName InSubtitleID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSequentialSubtitleFinishedLastText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSequentialSubtitleFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSequentialSubtitleCloseAtAllEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSequentialSubtitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckResearchModeFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckResearchDetail();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckResearch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNzResultStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNzResultFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckNzResultClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMovieSkipStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMovieSkipFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMenuGuideStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMenuGuideFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMainQuestMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMainQuestMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMainQuestMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckKagiSelectMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckKagiSelectMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckKagiMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckKagiMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckKagiMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGlossaryMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGlossaryMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGlossaryMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckFinishedKaiKagiSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDetPointCheckStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckDetPointCheckFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCutInCheckStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCutInCheckFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCutInAnimNextEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCutInAnimLoadCompleted(FName InCutInID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCutInAnimFinishedAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCollectionWindowStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCollectionMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCollectionMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCollectionMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCharacterMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCharacterMenuFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckCharacterMenuClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAreaMapMenuStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAreaMapMenuFinished();
    
    UFUNCTION(BlueprintCallable)
    bool CheckAllWidgetsClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAllAccessableWidgetsOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAllAccessableWidgetsClosed(bool bInContainClosing);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAccessedWidgetWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAccessableWidgetReady();
    
    UFUNCTION(BlueprintCallable)
    bool CharacterMenuStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CharacterMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeArea_SetEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeArea_SetData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInDrawText, float InScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ChangeArea_IsVisible(ARCCheckActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable)
    bool ButtonGuideStart(FName InModeID);
    
    UFUNCTION(BlueprintCallable)
    bool ButtonGuideFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ButtonGuideCheckStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ButtonGuideCheckFinished();
    
    UFUNCTION(BlueprintCallable)
    bool BusStop_SetEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    bool BusStop_SetData(ARCCheckActor* InCheckActor, FName InTextID, bool bInDraw, bool bInLooksLikeUsable, bool bInAccessable, float InScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BusStop_IsVisible(ARCCheckActor* InCheckActor);
    
    UFUNCTION(BlueprintCallable)
    bool BattleKagiSelectMenuStart(TArray<FName> InKaiKagiIDArray, int32 InFocusIndex);
    
    UFUNCTION(BlueprintCallable)
    bool BackLogStart();
    
    UFUNCTION(BlueprintCallable)
    bool BackLogFinish();
    
    UFUNCTION(BlueprintCallable)
    bool AreaMapMenuStart(bool bShortcut, FName InLocationID);
    
    UFUNCTION(BlueprintCallable)
    bool AreaMapMenuFinish();
    
    UFUNCTION(BlueprintCallable)
    void AllAccessableWidgetsOpen();
    
    UFUNCTION(BlueprintCallable)
    void AllAccessableWidgetsClose();
    
    UFUNCTION(BlueprintCallable)
    void AddLogAtSkip(FName InTextID);
    
};

